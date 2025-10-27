#include <stdio.h>

struct foo {
	int a;
	double b;
	struct bar *next;
};

void print_foo(struct foo *x) {
	printf("%d %g\n", x->a, x->b);
	x->a = 1000;
}

int main(int argc, char **argv) {
	struct foo f;
	f.a = 10;
	f.b = 3.3;

	print_foo(&f);
	print_foo(&f);

	return 0;
}

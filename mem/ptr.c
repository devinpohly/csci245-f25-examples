#include <stdio.h>

double g = 100.0;

int main(int argc, char **argv) {
	// Address of: &

	int x = 245;

	// Aliasing - multiple ways to refer to something

	// Pointer to int
	int *addr;
	addr = &x;

	int **p = &addr;

	printf("%p\n", addr);
	// Dereference: *
	printf("%ld\n", *addr);

	x = 100;
	printf("0x%lx\n", *addr);

	printf("%ld\n", p);
	printf("%ld\n", *p);
	printf("%ld\n", *(*p));

	return 0;
}

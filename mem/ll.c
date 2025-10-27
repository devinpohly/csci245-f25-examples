#include <stdio.h>

struct listnode;

struct listnode {
	int datum;
	struct listnode *next;
};

int main(int argc, char **argv) {
	struct listnode a;
	a.datum = 1;

	struct listnode b;
	b.datum = 2;

	struct listnode c;
	c.datum = 3;

	a.next = &b;
	b.next = &c;

	printf("%d\n", a.next->next->datum);

	return 0;
}

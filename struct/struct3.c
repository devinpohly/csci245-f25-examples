#include <stdio.h>

#include "point.h"

void print_struct(struct point pt) {
	printf("%c: (%g, %g)\n", pt.name, pt.x, pt.y);
}

struct point invert(struct point pt) {
	struct point flipped;
	flipped.name = pt.name + 1;
	flipped.x = pt.y;
	flipped.y = pt.x;
	return flipped;
}

int main(int argc, char **argv) {
	struct point p;
	p.x = 3.0;
	p.y = -2.1;
	p.name = 'P';

	print_struct(p);

	struct point q;
	q = p;
	q.name = 'Q';
	print_struct(q);

	q = invert(q);
	print_struct(q);

	return 0;
}

#include <stdio.h>

#include "point.h"

void print_struct(struct point pt) {
	printf("%c: (%g, %g)\n", pt.name, pt.x, pt.y);
}

void print_circle(struct circle c) {
	printf("○%c: (%g, %g)x%g\n", c.center.name,
			c.center.x, c.center.y, c.radius);
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

	struct circle c;
	c.center = p;
	c.radius = 4;

	print_circle(c);

	return 0;
}

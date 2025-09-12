#include <stdio.h>

#include "point.h"

// defines an alias for a type (any type)
// looks like variable decl. with typedef in front
typedef struct point point_t;
typedef int potatoes;

potatoes print_pointatoes(point_t pt) {
	printf("%c: (%g, %g)\n", pt.name, pt.x, pt.y);
	return 5;
}

int main(int argc, char **argv) {
	point_t p;

	potatoes mmm = 3;

	p.x = mmm;
	p.y = -10.01;
	p.name = 'P';

	print_pointatoes(p);

	return 0;
}

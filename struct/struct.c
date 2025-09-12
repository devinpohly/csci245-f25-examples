#include <stdio.h>

// type name is "struct point"
struct point {
	// fields
	double x;
	double y;
	char name;
};

int main(int argc, char **argv) {
	struct point p;
	p.x = 3.0;
	p.y = -2.1;
	p.name = 'P';

	printf("%c: (%g, %g)\n", p.name, p.x, p.y);

	struct point q;
	q = p;
	q.name = 'Q';
	printf("%c: (%g, %g)\n", q.name, q.x, q.y);

	printf("%c: (%g, %g)\n", p.name, p.x, p.y);

	return 0;
}

#include <stdio.h>

double g = 100.0;

int main(int argc, char **argv) {
	// Address of: &

	int x = 245;
	printf("%b\n",   x);
	printf("%ld\n", &x);
	printf("%ld\n", sizeof(x));

	printf("%f\n",   g);
	printf("%ld\n", &g);
	printf("%ld\n", sizeof(g));

	printf("%ld\n", &main);
	printf("%ld\n", sizeof(main));
	printf("%ld\n", &printf);
	printf("%ld\n", sizeof(printf));

	x = 20;
	printf("%d\n",   x);
	printf("%ld\n", &x);
	return 0;
}

#include <stdio.h>

void swap(int *x, int *y) {
	int t;

	t = *x;
	*x = *y;
	*y = t;
}

int main(int argc, char **argv) {
	int a = 10;
	int b = 22;

	swap(&a, &b);

	printf("%d, %d\n", a, b);

	return 0;
}

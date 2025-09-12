#include <stdio.h>

int main(int argc, char **argv) {
	int x;
	int y;

	x = 3;
	y = x;

	x = 5;
	printf("%d\n", y);

	return 0;
}

#include <stdio.h>

int fill_in(int *p, int x) {
	if (x < 0) {
		return 1;
	}
	*p = x * x;
	return 0;
}

int main(int argc, char **argv) {
	int result;

	int ret = fill_in(&result, 12);
	if (ret != 0) {
		printf("failed\n");
	} else {
		printf("square = %d\n", result);
	}

	return 0;
}

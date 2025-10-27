#include <stdio.h>
#include <stdlib.h>

int *new_array(int size) {
	int *arr = malloc(size * sizeof(int));
	return arr;
}

int main(void) {
	int *cubes = new_array(10);

	for (int i = 0; i < 10; i++) {
		cubes[i] = i * i * i;
	}

	int *squares = new_array(10);

	squares = realloc(squares, 20 * sizeof(int));

	for (int i = 0; i < 20; i++) {
		squares[i] = i * i;
	}

	for (int i = 0; i < 20; i++) {
		printf("%d ", squares[i]);
	}
	printf("\n");

	for (int i = 0; i < 10; i++) {
		printf("%d ", cubes[i]);
	}
	printf("\n");

	free(squares);
	free(cubes);

	return 0;
}

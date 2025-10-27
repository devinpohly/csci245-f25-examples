#include <stdio.h>

int *new_array(int size) {
	int arr[size];

	int *to_return = arr;

	return to_return;
}

int main(void) {
	int *cubes = new_array(10);

	for (int i = 0; i < 10; i++) {
		cubes[i] = i * i * i;
	}

	int *squares = new_array(10);

	for (int i = 0; i < 10; i++) {
		squares[i] = i * i;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", squares[i]);
	}
	printf("\n");

	for (int i = 0; i < 10; i++) {
		printf("%d ", cubes[i]);
	}
	printf("\n");

	return 0;
}

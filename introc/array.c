#include <stdio.h>

int main(void) {
	// Java:
	//int[] arr = new int[10];
	int arr[10];

	for (int i = 0; i < 10; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

#include <stdio.h>

#include "print_array.h"

int main(void) {
	// Java:
	//int[] arr = new int[10];
	int arr[10];

	for (int i = 0; i < 10; i++) {
		arr[i] = 2 * i;
	}
	print_array(arr, 10);

	return 0;
}

#include <stdio.h>

int main(void) {
	// Declaration
	int x = 245;

	// Initialization
	// int x = 5;

	// Assignment
	/* x = 5; */

	printf("x = %d\n", x);

	int arr[10];
	printf("%d\n", arr[-1]);

	arr[-1] = 100;
	printf("x = %d\n", x);

	return 0;
}

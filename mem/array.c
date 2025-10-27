#include <stdio.h>

int main(int argc, char **argv) {
	int arr[10];

	for (int i = 0; i < 10; i++) {
		arr[i] = i*i;
	}

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr);
	printf("%p\n", arr);

	int *p = arr;
	printf("%d\n", p[3]);
	// Pointer arithmetic
	printf("%d\n", *(p + 3));
	printf("%d\n", *(3 + p));
	printf("%d\n", 3[p]);

	return 0;
}

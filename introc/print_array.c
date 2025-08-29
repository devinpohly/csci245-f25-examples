#include <stdio.h>

#include "print_array.h"

void print_array(int a[], int len) {
	printf("[");
	for (int i = 0; i < len; i++) {
		if (i > 0) {
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("]\n");
}

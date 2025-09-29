#include <stdio.h>
#include <assert.h>

// PRECONDITION: haystack is in sorted order or else be it
// upon your own head
// Range is start <= i < stop
int binsearch(int needle, int haystack[], int start, int stop) {
	int len = stop - start;
	assert(len >= 0);
	if (len == 0) {
		return -1;
	} else if (len == 1) {
		if (needle == haystack[start])
			return start;
		else
			return -1;
	}
	assert(len > 0);
	int mid = (start + stop) / 2;
	if (needle < haystack[mid]) {
		return binsearch(needle, haystack, start, mid);
	} else {
		assert(needle >= haystack[mid]);
		return binsearch(needle, haystack, mid, stop);
	}
}

int main(int argc, char **argv) {
	int arr[] = {
		32, 681, 965, 1534, 1656, 2272, 2658, 3238, 5821, 6299, 6431, 6449, 6526, 6690, 7057, 7255, 7978, 10156, 10223, 10476, 11189, 11590, 15140, 15323, 15834, 16194, 16592, 18040, 18365, 19123, 20681, 21224, 21561, 22335, 22985, 23630, 24389, 24595, 25404, 25618, 25714, 26635, 27068, 27687, 27722, 28358, 28586, 28822, 30192, 32751,
	};

	for (int i = 0; i < 50; i++) {
		int lookfor = arr[i];
		int index = binsearch(lookfor, arr, 0, 50);

		if (index < 0) {
			printf("%d not found\n", lookfor);
		} else {
			printf("Index of %d is %d\n", lookfor, index);
		}
	}
	int lookfor = 0;
	int index = binsearch(lookfor, arr, 0, 50);

	if (index < 0) {
		printf("%d not found\n", lookfor);
	} else {
		printf("Index of %d is %d\n", lookfor, index);
	}

	lookfor = 32760;
	index = binsearch(lookfor, arr, 0, 50);

	if (index < 0) {
		printf("%d not found\n", lookfor);
	} else {
		printf("Index of %d is %d\n", lookfor, index);
	}

	lookfor = 11111;
	index = binsearch(lookfor, arr, 0, 50);

	if (index < 0) {
		printf("%d not found\n", lookfor);
	} else {
		printf("Index of %d is %d\n", lookfor, index);
	}

	/* for (int i = 0; i < 50; i++) { */
	/* 	printf("%d\n", arr[i]); */
	/* } */

	return 0;
}

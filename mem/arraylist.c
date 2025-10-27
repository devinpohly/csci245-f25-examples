#include <stdlib.h>

#include <stdio.h>

struct arraylist {
	int *arr;
	int capacity;
	int size;
};

void al_init(struct arraylist *al) {
	al->capacity = 10;
	al->arr = malloc(al->capacity * sizeof(int));
	al->size = 0;
}

void al_destroy(struct arraylist *al) {
	free(al->arr);
}

void al_add(struct arraylist *al, int x) {
	if (al->size >= al->capacity) {
		while (al->capacity < al->size)
			al->capacity *= 2;
		al->arr = realloc(al->arr, al->capacity * sizeof(int));
	}
	al->arr[al->size] = x;
	al->size++;
}

int main(void) {
	struct arraylist *al = malloc(sizeof(struct arraylist));;
	al_init(al);

	al_add(al, 10);

	al_destroy(al);

	free(al);

	return 0;
}

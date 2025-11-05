#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

struct arraystack {
	int *arr;
	int capacity;
	int size;
};


void as_init(struct arraystack *stacc) {
	stacc->capacity = 10;
	stacc->arr = malloc(stacc->capacity * sizeof(int));
	stacc->size = 0;
}

void as_destroy(struct arraystack *stacc) {
	free(stacc->arr);
}

void as_push(struct arraystack *stacc, int i) {
	// grow until capacity >= size + 1
	if (stacc->size >= stacc->capacity) {
		while (stacc->capacity < stacc->size)
			stacc->capacity *= 2;
		stacc->arr = realloc(stacc->arr, stacc->capacity * sizeof(int));
	}
	assert(stacc->size < stacc->capacity);

	stacc->arr[stacc->size] = i;
	stacc->size++;
}

int as_pop(struct arraystack *stacc) {
	stacc->size--;
	return stacc->arr[stacc->size];
}

int as_peek(struct arraystack *stacc) {
	return stacc->arr[stacc->size - 1];
}

int main(void) {
	struct arraystack s;
	as_init(&s);

	as_push(&s, 1);
	as_push(&s, 2);
	printf("%d\n", as_pop(&s));
	printf("%d\n", as_pop(&s));
	as_push(&s, 3);
	printf("%d\n", as_pop(&s));
	as_push(&s, 4);
	printf("%d\n", as_pop(&s));

	as_destroy(&s);
	return 0;
}

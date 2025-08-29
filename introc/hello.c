#include <stdio.h>

int main(void) {

	//int i;
	for (int i = 0; i < 5; i++) {
		//System.out.println("Hello, world #" + i + "!");
		printf("Hello, world #%d!\n", i < 5);
	}
	if (0) {
		printf("0 is true!\n");
	}

	// Return 0 for success, nonzero for failure
	return 0;

}

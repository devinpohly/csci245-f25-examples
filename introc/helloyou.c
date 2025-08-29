#include <stdio.h>
#include <string.h>

int main(void) {

	char name[100];

	printf("Hi!  What's your name?\n");
	scanf("%s", name);
	printf("No seriously, what's your name really?\n");
	scanf("%s", name);

	name[0] = 'Y';
	name[4] = 'm';

	//int i;
	for (int i = 0; i < 5; i++) {
		//System.out.println("Hello, world #" + i + "!");
		printf("Hello, %s #%d!\n", name, i < 5);
	}

	/* int len = 0; */
	/* while (name[len] != '\0') { */
	/* 	len++; */
	/* } */
	printf("Your name is %d letters long\n", strlen(name));

	// name = "Kermit"
	strcpy(name, "Kermit");
	printf("I now dub thee %s\n", name);

	// name += "oni"
	strcat(name, "oni");
	printf("I mean %s :P\n", name);

	char name2[] = "Kermitoni";
	name == name2?  - > false (0)

	// Return 0 for success, nonzero for failure
	return 0;

}

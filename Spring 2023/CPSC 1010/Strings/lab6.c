/*		Kaylee Pierce
		CPSC 1011-002
		Lab #6
		02/28/2023
		Program to read a text file using redirection and give
		the number of lines present.
*/

#include <stdio.h>

#define MAX_LINE 200
#define MAX_LINE_LEN 100

int main(){
	
	int count = 0, i;
	char array[MAX_LINE][MAX_LINE_LEN];
	
	while (fgets(array[count], MAX_LINE_LEN, stdin)) {
		count++;
	}

	printf("This poem has %d lines.\n", count);

	for (i = 0; i < count; i++) {
		printf("%s", array[i]);
	}

	
return 0;
}

/*
		Kaylee Pierce
		CPSC 1011-002
		Lab #7
		03/10/2023
		This program uses FILE pointers to print a poem,
		show number of lines in the poem, as well as,
		convert the case.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINES 1000
#define MAX_LINE_LENGTH 1000

int main () {
	
	char text[MAX_LINES][MAX_LINE_LENGTH];
	char oppositeCase[MAX_LINES][MAX_LINE_LENGTH];
	int count = 0;
	int choice = 0;

	system(" cp poe-raven.txt input.txt");

	FILE *inFile = fopen("input.txt", "r");
	if(inFile == NULL) {
		printf("Error.\n");
		return 1;
	}

	char line[MAX_LINE_LENGTH];
	while(fgets(line, MAX_LINE_LENGTH, inFile) != NULL) {
		strcpy(text[count], line);
		count++;
	}

	fclose(inFile);

	for(int i = 0; i < count; i++) {
		strcpy(oppositeCase[i], text[i]);
	}
	
	do {
		printf("\nChoose from the menu:");
		printf("\n1. print the poem");
		printf("\n2. show number of lines in the poem");
		printf("\n3. convert the case");
		printf("\n4. quit\n\n");
		printf("\n - - >");
		fscanf(stdin, "%d", &choice);
		printf("\n");

		switch (choice) {
			case 1:
			for (int i = 0; i < count; i++) {
				printf("%s", text[i]);
			}
			break;

			
			case 2:
				printf("The poem has %d lines.\n", count);
				break;

			case 3:
				for (int i = 0; i < count; i++) {
					for (int j = 0; j < strlen(oppositeCase[i]); j++) {
						if (islower(oppositeCase[i][j])) {
							oppositeCase[i][j] = toupper(oppositeCase[i][j]);
						}
						else if (isupper(oppositeCase[i][j])) {
							oppositeCase[i][j] = tolower(oppositeCase[i][j]);
						}
					}
				}
				for (int i = 0; i < count; i++) {
					printf("%s", oppositeCase[i]);
				}
				break;
			
			case 4:
				break;

			default:
				break;
			}
		} while (choice != 4);
	
	return 0;
}

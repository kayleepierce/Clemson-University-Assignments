/*
		Kaylee Pierce
		CPSC 1011-002
		Lab #8
		03/14/2023
		This program uses FILE pointers and functions to print a poem,
		show number of lines in the poem, as well as,
		convert the case.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINES 1000
#define MAX_LINE_LENGTH 1000

int printMenu();

void printArray(char text[MAX_LINES][MAX_LINE_LENGTH], int size);

void convertCase(char text[MAX_LINES][MAX_LINE_LENGTH], char origText[MAX_LINES][MAX_LINE_LENGTH]);

int main () {
	
	char text[MAX_LINES][MAX_LINE_LENGTH];
	char origText[MAX_LINES][MAX_LINE_LENGTH];
	int menuChoice;
	int count = 0;

	system(" cp poe-raven.txt input.txt");

	FILE *inFile = fopen("input.txt", "r");
	if(inFile == NULL) {
		printf("Error.\n");
		return 1;
	}

	char line[MAX_LINE_LENGTH];
	while(fgets(line, MAX_LINE_LENGTH, inFile) != NULL) {
		strcpy(text[count], line);
		strcpy(origText[count], line);
		count++;
	}

	fclose(inFile);

	for(int i = 0; i < count; i++) {
		strcpy(origText[i], text[i]);
	}

	do {
		
		menuChoice = printMenu();

		switch (menuChoice) {
			case 1:
				printArray(text, count);
				break;
			
			case 2:
				printf("The poem has %d lines.\n", count);
				break;

			case 3:
				convertCase(text, origText);		
				break;
			
			case 4:
				break;

			default:
				break;
			}
		} while (menuChoice != 4);
	
	return 0;
}

/*------------------------------------------------------------*/
/* prints a menu to the user
	parameters: none
	return: the menu choice that the user enters
*/
int printMenu(){
	int menuChoice;
	printf("\nChoose from the menu:");
	printf("\n1. print the poem");
	printf("\n2. show number of lines in the poem");
	printf("\n3. convert the case");
	printf("\n4. quit\n\n");
	printf("\n - - >");
	fscanf(stdin, "%d", &menuChoice);
	printf("\n");
	return menuChoice;
}

/*------------------------------------------------------------*/
/* prints array
	parameters: (char text[MAX_LINES][MAX_LINE_LENGTH], int size);
	return: the array
*/
void printArray(char text[MAX_LINES][MAX_LINE_LENGTH], int size){
	for(int i = 0; i < size; i++) {
		printf("%s", text[i]);
	}
}

/*------------------------------------------------------------*/
/* converts the case
	parameters: (char text[MAX_LINES][MAX_LINE_LENGTH]);
	return: convert the case
*/
void convertCase(char text[MAX_LINES][MAX_LINE_LENGTH], char origText[MAX_LINES][MAX_LINE_LENGTH]){
	 int count = MAX_LINES;
    for (int k = 0; k < count; k++) {
        for (int p = 0; p < strlen(text[k]); p++) {
            if (islower(text[k][p])) {
                text[k][p] = toupper(text[k][p]);
            }
            else if (isupper(text[k][p])) {
                text[k][p] = tolower(text[k][p]);
            }
        }
    }
    for (int k = 0; k < count; k++) {
        printf("%s", text[k]);
    }
	 for (int k = 0; k < count; k++) {
        strcpy(text[k], origText[k]);
    }
}

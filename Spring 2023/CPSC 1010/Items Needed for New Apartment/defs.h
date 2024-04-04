/*
	Kaylee Pierce
	04/26/2023
	CPSC 1010 Section 20
	PA4
	This is a header file that contains the initItem, buildList,
	and printItems functions
*/

#ifndef defs_h
#define defs_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINES 1000
#define MAX_LINE_LENGTH 1000

typedef struct {
	char itemName[30];
	int itemQty;
	char needed[4];
}item;

void buildList(item* itemList, int size);
item initItem(char* newItem, int newQty);
void printItems(item *itemList, int size);

#endif
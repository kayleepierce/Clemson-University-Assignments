/* 
	Kaylee Pierce
	04/26/2023
	CPSC 1010 Section 20
	PA4
	This file contains the printItems function
*/

#include "defs.h"

/*	prints a menu to the user
		parameters: item *itemList, int size
		return: list with user input
*/

void printItems(item *itemList, int size) {
	printf("\n\nItems in list: \n");
	for(int i = 0; i < size; i++){
		printf("\t%d %-15s needed: %s\n", 
		itemList[i].itemQty, itemList[i].itemName, itemList[i].needed);
	}
	printf("\n\n");
}
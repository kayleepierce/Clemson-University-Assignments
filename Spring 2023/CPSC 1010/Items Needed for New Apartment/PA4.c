/* 
	Kaylee Pierce
	04/26/2023
	CPSC 1010 Section 20
	PA4
	Program creates a list of items a user
	can enter to keep track of items needed
	for apartment
*/

#include "defs.h"

#define MAX_LINES 1000
#define MAX_LINE_LENGTH 1000

int main(int argc, char* argv[] ) {
	int numItems = atoi(argv[1]);

	item *itemList = (item*) malloc(numItems * sizeof(item));

	buildList(itemList, numItems);
	printItems(itemList, numItems);

	free(itemList);

	return 0;
}
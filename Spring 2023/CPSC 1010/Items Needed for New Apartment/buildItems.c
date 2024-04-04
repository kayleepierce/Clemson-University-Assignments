/* 
	Kaylee Pierce
	04/26/2023
	CPSC 1010 Section 20
	PA4
	This file contains the buildList function
*/

#include "defs.h"

/*		prints buildList questions to user
		parameters: item* itemList, int size
		return: input of user
*/

void buildList(item* itemList, int size) {
    item furn;

    for(int i = 0; i < size; i++){
        int itemQty;
        char furnName[MAX_LINE_LENGTH];
        printf("\nApartment item: ");
        fgets(furnName, MAX_LINE_LENGTH, stdin);
        if (furnName[strlen(furnName) - 1] == '\n') {
            furnName[strlen(furnName) - 1] = '\0';
        }
        printf("\nHow many? ");
        scanf("%d", &itemQty);
        furn = initItem(furnName, itemQty);
        itemList[i] = furn;
        getchar();
    }
}
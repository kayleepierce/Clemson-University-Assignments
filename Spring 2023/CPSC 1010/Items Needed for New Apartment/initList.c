/*
 * Kaylee Pierce
 * 04/26/2023
 * CPSC 1010 Section 20
 * PA4
 * This file contains the initItem function
 */

#include "defs.h"

/*
		prints initItem function question to user
		parameters: char* newItem, int newQty
		return: number user enters (1 or 0)

*/

item initItem(char* newItem, int newQty) {
    item Item;

    strcpy(Item.itemName, newItem);
    Item.itemQty = newQty;

    int response;
    printf("\nNeed the item (1) or already have it (0): ");
    scanf("%d", &response);

    if(response == 1){
        strcpy(Item.needed, "yes");
    } else {
        strcpy(Item.needed, "no");
    }

    return Item;
}
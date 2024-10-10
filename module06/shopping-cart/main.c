#include<stdio.h>
#include<string.h>

#include "ItemToPurchase.h"

int main(void) {
    int i;
    const int NUM_ITEMS = 2;
    char name1[50];
    char name2[50];
    int price;
    int quantity;
    int total;
    ItemToPurchase item1;
    ItemToPurchase item2;
    char c;

    for (i = 0; i < NUM_ITEMS; ++i) {
        printf("Item %d\n", i + 1);
        printf("Enter the item name:\n");
        scanf("%s", name1);
        scanf("%s", name2);
        
        printf("Enter the item price:\n");
        scanf("%d", &price);
        
        printf("Enter the item quantity:\n");
        scanf("%d", &quantity);
        printf("\n");
        
        if (i == 0) {
            strcat(name1, " ");
            strcat(name1, name2);
            strcpy(item1.itemName, name1);
            item1.itemPrice = price;
            item1.itemQuantity = quantity;
        }
        
        else if (i == 1) {
            strcat(name1, " ");
            strcat(name1, name2);
            strcpy(item2.itemName, name1);
            item2.itemPrice = price;
            item2.itemQuantity = quantity;
        }
        
        c = getchar();
        while(c != '\n' && c != EOF) {
            c = getchar();
        }
    }

    total = (item1.itemPrice * item1.itemQuantity) + 
        (item2.itemPrice * item2.itemQuantity);

    printf("TOTAL COST\n");

    printf("%s %d @ $%d = $%d\n", item1.itemName, item1.itemQuantity, 
        item1.itemPrice, (item1.itemPrice * item1.itemQuantity));

    printf("%s %d @ $%d = $%d\n\n", item2.itemName, item2.itemQuantity, 
        item2.itemPrice, (item2.itemPrice * item2.itemQuantity));

    printf("Total: $%d\n", total);

    return 0;
}
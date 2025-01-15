#include <stdio.h>

#include "ItemToPurchase.h"

ItemToPurchase setQuantity(ItemToPurchase i, int quantity) {
    i.itemQuantity = quantity;
    return i;
}

int main(void) {
    ItemToPurchase item1; // "empty" item

    printf("Items are %lu bytes\n", sizeof item1);

    printf("printing fields\n");
    printf("name: %s\n", item1.itemName);
    printf("price: %d\n", item1.itemPrice);
    printf("quantity: %d\n", item1.itemQuantity);

    item1 = setQuantity(item1, 42);
    printf("printing fields\n");
    printf("name: %s\n", item1.itemName);
    printf("price: %d\n", item1.itemPrice);
    printf("quantity: %d\n", item1.itemQuantity);

    return 0;
}
# Problem Description  
1. Create three files to submit:

- ItemToPurchase.h - Struct definition and related function declarations
- ItemToPurchase.c - Related function definitions
- main.c - main() function

Build the ItemToPurchase struct with the following specifications: 

- Data members 
    - char itemName [ ]
    - int itemPrice
    - int itemQuantity
- Related functions
    - MakeItemBlank() 
        - Has a pointer to an ItemToPurchase parameter. 
        - Sets item's name = "none", item's price = 0, item's quantity = 0
    - PrintItemCost()
        - Has an ItemToPurchase parameter.

<br />

## Expected format of PrintItemCost() output  
```
Bottled Water 10 @ $1 = $10
```

<br />
2. In main(), prompt the user for two items and create two objects of the ItemToPurchase struct.  Before prompting for the second item, enter the following code to allow the user to input a new string. `c` is declared as in int.  

```
c = getchar();
while(c != '\n' && c != EOF) {
   c = getchar();
}
```
<br />

## Expected Program Output (with sample user input)
```
Item 1
Enter the item name:
Chocolate Chips
Enter the item price:
3
Enter the item quantity:
1

Item 2
Enter the item name:
Bottled Water
Enter the item price:
1
Enter the item quantity:
10
```
<br />
3. Add the costs of the two items together and output the total cost. 
<br /><br />

## Expected Program Output (with sample user input)
```
TOTAL COST
Chocolate Chips 1 @ $3 = $3
Bottled Water 10 @ $1 = $10

Total: $13
```

# Error Handling
Don't worry about user input errors in the UI. The purpose of this program is to test the ItemToPurchase struct and supporting functions.  Please focus your attention on implementing the expected behaviour for each function declared in the ItemToPurchase.h header file.

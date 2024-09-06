# Problem Description

Output each floating-point value with two digits after the decimal point, which can be achieved as follows:<br />`printf("%0.2lf", yourValue);`

<br />
1. Prompt the user to enter five numbers, being five people's heights. Store the numbers in an array of doubles. Output the array's numbers on one line, each number followed by one space.
<br /><br />

## Expected Program Output (with sample user input)
```
Enter height 1:
236.0
Enter height 2:
89.5
Enter height 3:
142.0
Enter height 4:
166.3
Enter height 5:
93.0
You entered: 236.00 89.50 142.00 166.30 93.00

```
<br /> 
2. Also output the total height, by summing the array's elements. 

<br /> 
3.  Also output the average of the array's elements.  

<br /> 
4.  Also output the max array element.  
<br /><br />

## Expected Program Output (with sample user input)
```
Enter height 1:
236.0
Enter height 2:
89.5
Enter height 3:
142.0
Enter height 4:
166.3
Enter height 5:
93.0
You entered: 236.00 89.50 142.00 166.30 93.00 

Total height: 726.80
Average height: 145.36
Max height: 236.00

```

Output each floating-point value with two digits after the decimal point, which can be achieved as follows:<br />`printf("%0.2lf", yourValue);`


# Error Handling
The following describes the expected behavior in the event of unexpected user input
- If the user inputs a non-numerical height value, simply prompt for the height value again.
- Something to think about... Does it make sense to allow the user to enter negative values for height in this situation? 

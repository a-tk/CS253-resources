# Problem Description

This program will output a right triangle based on user specified height triangleHeight and symbol triangleChar. 

<br />
1. The given program outputs a fixed-height triangle using a * character. Modify the given program to output a right triangle that instead uses the user-specified triangleChar character.  

<br />
<br />
2. Modify the program to use a nested loop to output a right triangle of height triangleHeight. The first line will have one user-specified character, such as % or *. Each subsequent line will have one additional user-specified character until the number in the triangle's base reaches triangleHeight. Output a space after each user-specified character, including after the line's last user-specified character.  

<br />


## Expected Program Output (with sample user input)
```
Enter a character:
%
Enter triangle height:
5

% 
% % 
% % % 
% % % % 
% % % % % 
```
# Error Handling
The following describes the expected behavior in the event of unexpected user input
- If the user input for triangle height is not an integer, display the following and exit immediately with a non-zero exit status  
```
Error: Unrecognized input, please enter only integer values.
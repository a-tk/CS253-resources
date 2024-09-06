# Problem Description
<br />
1. Prompt the user to enter a string of their choosing, assuming a 49 character maximum. Output the string. 

*Note: If we create an array of size 50 to hold the string, the user will in fact only be able to enter 49 characters because the array will need to also hold the trailing null ('\0') character.*
<br /><br />

## Expected Program Output (with sample user input)
```
Enter a sentence or phrase:
The only thing we have to fear is fear itself.

You entered: The only thing we have to fear is fear itself.

```
<br />
2. Complete the GetNumOfCharacters() function, which returns the number of characters in the user's string. Make sure to count the trailing newline character if applicable. 

*We encourage you to use a for loop in this function.*  

<br />
3. In main(), call the GetNumOfCharacters() function and then output the returned result. 

<br /><br />
4. Implement the OutputWithoutWhitespace() function. OutputWithoutWhitespace() outputs the string's characters except for whitespace (spaces, tabs). Note: A tab is '\t'. Call the OutputWithoutWhitespace() function in main(). 
<br /><br />

## Expected Program Output (with sample user input)
```
Enter a sentence or phrase:
The only thing we have to fear is fear itself.

You entered: The only thing we have to fear is fear itself.

Number of characters: 47
String with no whitespace: Theonlythingwehavetofearisfearitself.

```

# Error Handling
The following describes the expected behavior in the event of unexpected user input
- If the user enters a string with more than 49 characters, simply truncate it and process the truncated result

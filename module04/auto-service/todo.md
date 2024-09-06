# Problem Description
<br />
1. Prompt the user for an automobile service. Each service type is composed of two words and can be processed as either two separate strings or as a single string (see scanf manpage). Output the user's input.
<br />

## Expected Program Output (with sample user input)
```
Enter desired auto service:
Oil change
You entered: Oil change
```
<br />
2. Output the price of the requested service.
<br />

## Expected Program Output (with sample user input)
```
Enter desired auto service:
Oil change
You entered: Oil change
Cost of oil change: $35
```
<br />
The program should support the following services:

- Oil change -- $35
- Tire rotation -- $19
- Car wash -- $7


# Error Handling
The following describes the expected behavior in the event of unexpected user input
- If the user input exceeds 40 characters for either field, only match the first 40 characters and truncate the remainder
- If the user input does not match the expected pattern, display the following and exit immediately with a non-zero exit status  
```
Error: Unable to parse input
```
- If the user enters a service that is not listed above, display the following and exit immediately with a non-zero exit status  
```
Error: Requested service is not recognized
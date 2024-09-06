# Problem Description

*You will be building a linked list. Make sure to keep track of both the head and tail nodes.*

<br /> 
1. Create three files to submit.

- ContactNode.h - Struct definition, including the data members and related function declarations
- ContactNode.c - Related function definitions
- main.c - main() function

<br /> 
2. The ContactNode struct as well as function declarations for the related functions described below have been provided in ContactNode.h.  Please do not modify the provided ContactNode.h file. Details regarding each function as well as expected return values are included in the comments associated with each function declaration in ContactNode.h.  The following is a summary of this content:

- Data members
   - char contactName[50]
   - char contactPhoneNum[50]
   - struct ContactNode* nextNodePtr
- Related functions
   - ContactNode* CreateContactNode(char nameInit[], char phoneNumInit[]) 
      - Call malloc to allocate space for a ContactNode and return a pointer to the initialized object
   - void InsertContactAfter(ContactNode* thisNode, ContactNode* newNode) 
      - Insert a new node after node
   - ContactNode* GetNextContact(ContactNode* thisNode) 
      - Return location pointed by nextNodePtr
   - void PrintContactNode(ContactNode* thisNode)
      - Display the contents of this PlaylistNode on stdout using printf
   - void DestroyContactNode(ContactNode* thisNode)
      - Call free to release all memory dynamically allocated by malloc for the specified node


<br />  

## Expected format of PrintContactNode() output
```
Name: Roxanne Hughes
Phone number: 443-555-2864
```
<br />
3. In main(), prompt the user for three contacts and output the user's input. Create three ContactNodes and use the nodes to build a linked list. 
<br /><br />

## Expected Program Output (with sample user input) 
```
Person 1
Enter name:
Roxanne Hughes
Enter phone number:
443-555-2864
You entered: Roxanne Hughes, 443-555-2864

Person 2
Enter name:
Juan Alberto Jr.
Enter phone number:
410-555-9385
You entered: Juan Alberto Jr., 410-555-9385

Person 3
Enter name:
Rachel Phillips
Enter phone number:
310-555-6610
You entered: Rachel Phillips, 310-555-6610
```
<br />
4. Output the linked list. 
<br /><br />

## Expected Program Output (with sample user input from above)
```
CONTACT LIST
Name: Roxanne Hughes
Phone number: 443-555-2864

Name: Juan Alberto Jr.
Phone number: 410-555-9385

Name: Rachel Phillips
Phone number: 310-555-6610
```

<br />
5. Run valgrind to check for memory leaks or errors
<br /><br />

```
valgrind --tool=memcheck --leak-check=yes --show-reachable=yes ./myprog
valgrind --tool=memcheck --leak-check=yes --show-reachable=yes ./mytests -t <test_num>
```

# Error Handling
For the LabWarmup, please do not worry about user input errors in the UI. The purpose of this program is to test the ContactNode struct and supporting functions.  Please focus your attention on implementing the expected behaviour for each function declared in the ContactNode.h header file.

#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct node {
    struct node *next;
    struct node *prev;
    int key;
} Node;


typedef struct list List;
typedef struct list *ListPtr;

struct list {
    Node *head;
    Node *tail;
    int size;
    
};

/* 
 * Constructs an empty list
 * Returns NULL upon failure
 */
ListPtr CreateList(void);

/* frees all memory associated with the list */
void DestroyList(ListPtr L);

/* Returns the number of elements in this list, or -1 if L is NULL */
int ListSize(ListPtr L);

/* Returns true if this list contains no elements, or if L is NULL */
bool ListIsEmpty(ListPtr L);

/* 
 * Returns the Node at the specified position in this list
 * Returns NULL if index is beyond the bounds of the List or L is NULL
 */
Node *ListGet(ListPtr L, int index);

/* 
 * Returns the Node containing of the first occurrence of the specified 
 * element in this list, or -1 if this list does not contain the element
 * Returns -1 if L is NULL
 */
Node *ListIndexOf(ListPtr L, int element);

/* 
 * Inserts the specified element at the front of the list
 * The element at index when the method is called is retained in the List
 * The order of the elements in the list is not specified after calling ListAdd
 * Does nothing if index is negative. Does nothing if index is greater than L->size
 */
void ListAddAtFront(ListPtr L, int element);

/*
 * Appends the specified element to the end of this list. 
 * Grows the array if more room is needed
 */
void ListAddAtRear(ListPtr L, int element);

/*
 * Removes the element with the specified key
 */
void ListRemove(ListPtr L, int key);

/* Sorts the elements in the list according to StringCompare */
void ListReverse(ListPtr L);

/* Removes all of the elements from this list. */
void ListClear(ListPtr L);

/*
 * Prints a representation of this List.
 * The representation consists of the List's int's 
 * in the order they are stored, separated by newlines.
 */
void ListPrint(ListPtr L);

#endif // LIST_H
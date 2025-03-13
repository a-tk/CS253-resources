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

Node *CreateNode(int);

void DestroyNode(Node *);

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

/**
 * Search the list for the Node containing the specified key value
 */
Node *ListSearch(ListPtr L, int key);

/* 
 * Inserts the specified node at the front of the list
 */
void ListAddAtFront(ListPtr L, Node *node);

/*
 * Appends the specified node to the end of this list.
 */
void ListAddAtRear(ListPtr L, Node *node);


/*
 * Removes the node at the front of the list
 */
Node *ListRemoveFront(ListPtr L);


/**
 * Removes the node at the rear of the list
 */
Node *ListRemoveRear(ListPtr L);

/**
 * Removes the node from the list L
 */
Node *ListRemoveNode(ListPtr L, Node *node);

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
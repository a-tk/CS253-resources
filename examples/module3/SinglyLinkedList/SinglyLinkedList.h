#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct node {
    struct node *next;
    int key;
} Node;


typedef struct list List;
typedef struct list *ListPtr;

struct list {
    Node *head;
};

Node *CreateNode(int);

void DestroyNode(Node *);

/* 
 * Constructs an empty list
 */
ListPtr CreateList(void);

/* frees all memory associated with the list */
void DestroyList(ListPtr L);

/**
 * Search the list for the Node containing the specified key value
 */
Node *ListSearch(ListPtr L, int key);

/* 
 * Inserts the specified node at the front of the list
 */
void ListAddAtFront(ListPtr L, Node *node);


/**
 * Reverses L in place
 */
void ListReverse(ListPtr L);

/*
 * Prints a representation of this List.
 * The representation consists of the List's int's 
 * in the order they are stored, separated by newlines.
 */
void ListPrint(ListPtr L);

#endif // LIST_H
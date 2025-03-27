#ifndef __SINGLYLINKEDLIST_H
#define __SINGLYLINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;
typedef struct node *NodePtr;

typedef struct list List;
typedef struct list *ListPtr;

struct node {
	void *item;
	NodePtr next;
};

struct list {
	NodePtr head;
    char *(*ToString)(const void *);
    void (*DestroyObject)(void *);
};

/**
  Create a list
  @return a pointer to the new list
*/
ListPtr CreateList(char *(*toString)(const void *), void (*freeObject)(void *));

NodePtr CreateNode(void *item);

void DestroyNode(NodePtr node);

/**
  Add a node to the front  of the list.
  @param L pointer to front of the list
  @param node the new node to add
  @return the current pointer to the front of the list
 */
void ListAddAtFront(ListPtr L, NodePtr node);


/**
  Print the list from start to end.
  @param L pointer to front of the list
*/
void ListPrint(ListPtr L);


/**
  free the list
  @param L pointer to front of the list
*/
void DestroyList(ListPtr L);


#endif /* __SINGLYLINKEDLIST_H */ 

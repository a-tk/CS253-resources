

#include "List.h"

ListPtr CreateList(void) {
    ListPtr l = (ListPtr) malloc(sizeof(List));

    if (l == NULL) {
        fprintf(stderr, "Error: List: OOM\n");
        return NULL;
    }

    l->head = NULL;
    l->tail = NULL;
    l->size = 0;

    return l;
}

/* frees all memory associated with the list */
void DestroyList(ListPtr L);


static void count_n(Node *n, int a) {
    if (n) {
        count_n(n->next, a + 1);
        return;
    } else {
        return;
    }
}


/* Returns the number of elements in this list, or -1 if L is NULL */
int ListSize(ListPtr L) {
    if (L) {
        return L->size;
    } else {
        return 0;
    }
}


/* Returns true if this list contains no elements, or if L is NULL */
bool ListIsEmpty(ListPtr L);

/* 
 * Returns the Node at the specified position in this list
 * Returns NULL if index is beyond the bounds of the List or L is NULL
 */
Node *ListGet(ListPtr L, int index);

/* 
 * Returns the Node containing of the first occurrence of the specified 
 * element in this list, or NULL if this list does not contain the element
 * Returns NULL if L is NULL
 */
Node *ListNodeOf(ListPtr L, int element);

/* 
 * Inserts the specified element at the front of the list
 * The element at index when the method is called is retained in the List
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
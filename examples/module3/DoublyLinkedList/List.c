#include <stdio.h>
#include <stdlib.h>

#include "List.h"

Node *CreateNode(int key) {
    Node *n = (Node *)malloc(sizeof(Node));

    if (n == NULL) {
        fprintf(stderr, "Error: List: OOM\n");
        return NULL;
    }

    n->key = key;
    n->next = NULL;
    n->prev = NULL;

    return n;
}

void DestroyNode(Node *n) {
    if (n != NULL) {
        free(n);
    }
}

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
void DestroyList(ListPtr L) {

}

/* Returns the number of elements in this list, or -1 if L is NULL */
int ListSize(ListPtr L) {
    if (L == NULL) {
        return -1;
    } else {
        return L->size;
    }
}

/* Returns true if this list contains no elements, or if L is NULL */
bool ListIsEmpty(ListPtr L) {

    bool ret; 
    if (L == NULL) {
        ret = true;
    } else {
        ret = L->size == 0;
    }

    return ret;
}

/**
 * Search the list for the Node containing the specified key value
 */
Node *ListSearch(ListPtr L, int key) {
    return NULL;
}

/* 
 * Inserts the specified node at the front of the list
 */
void ListAddAtFront(ListPtr L, Node *node) {
    if (L != NULL && node != NULL) {
        if (L->size == 0) {
            //the first one! 
            L->head = node;
            L->tail = node;
            L->size = 1;
        } else {
            node->next = L->head;
            L->head = node;
            L->head->next->prev = L->head;
            node->prev = NULL;
            L->size += 1;
        }
    }
}

/*
 * Appends the specified node to the end of this list.
 */
void ListAddAtRear(ListPtr L, Node *node) {

    if (L != NULL && node != NULL) {
        if (L->size == 0) {
            //the first one!
            L->head = node;
            L->tail = node;
            L->size = 1;
        } else {
            node->prev = L->tail;
            L->tail = node;
            L->tail->prev->next = L->tail;
            node->next = NULL;
            L->size += 1;
        }
    }
}


/*
 * Removes the node at the front of the list
 */
Node *ListRemoveFront(ListPtr L) {
    return NULL;
}


/**
 * Removes the node at the rear of the list
 */
Node *ListRemoveRear(ListPtr L) {
    return NULL;
}

/**
 * Removes the node from the list L
 */
Node *ListRemoveNode(ListPtr L, Node *node) {
    return NULL;
}

/* Sorts the elements in the list according to StringCompare */
void ListReverse(ListPtr L) {

}

/* Removes all of the elements from this list. */
void ListClear(ListPtr L){
    if (L != NULL) {

        Node *t = L->head;
        Node *current  = t;

        while (t != NULL) {
            current = t;
            t = t->next;

            DestroyNode(current);
        }

        L->head = NULL;
        L->tail = NULL;
        L->size = 0;
    }

}

/*
 * Prints a representation of this List.
 * The representation consists of the List's int's 
 * in the order they are stored, separated by newlines.
 */
void ListPrint(ListPtr L) {
    if (L != NULL) {

        Node *t = L->head;
        while (t != NULL) {
            printf("%d\n", t->key);
            t = t->next;
        }
    }
}

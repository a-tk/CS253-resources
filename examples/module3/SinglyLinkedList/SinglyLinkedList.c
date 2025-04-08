#include <stdio.h>
#include <stdlib.h>

#include "SinglyLinkedList.h"

Node *CreateNode(int key) {
    // Note, doesn't check for errors from malloc
    Node *N = (Node *) malloc(sizeof(Node));
    N->key = key;
    return N;
}

void DestroyNode(Node *N) {
    if (N) {
        free(N);
    }
}


ListPtr CreateList(void) {
    // Note, doesn't check for errors from malloc
    ListPtr L = (ListPtr) malloc(sizeof(List));
    L->head = NULL;
    return L;
}


void DestroyList(ListPtr L) {
    Node *t = L->head;
    while (t) {
        Node *p = t;
        t = t->next;
        DestroyNode(p);
    }

    free(L);
}


Node *ListSearch(ListPtr L, int key){

    Node *t = L->head;
    while (t) {
        if (t->key == key) break;
        t = t->next;
    }

    return t;
}


void ListAddAtFront(ListPtr L, Node *node) {

    if (node) {
        node->next = L->head;
        L->head = node;
    }
}


void ListReverse(ListPtr L) {
    Node *c = L->head;
    Node *p = NULL;
    while (c) {
        Node *t = c->next;
        c->next = p;
        p = c;
        c = t;
    }
    L->head = p;
}


void ListPrint(ListPtr L) {
    
    Node *t = L->head;
    while (t) {
        printf("%d\n", t->key);
        t = t->next;
    }
}
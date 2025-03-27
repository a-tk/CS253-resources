#include <stdio.h>
#include <stdlib.h>
#include "SinglyLinkedList.h"


ListPtr CreateList(int (*Compar)(const void *, const void *), char *(*ToString)(const void *), void (*DestroyObject)(void *)) {
    ListPtr L = (ListPtr) malloc(sizeof(List));
    L->head = NULL;
    L->Compar = Compar;
    L->ToString = ToString;
    L->DestroyObject = DestroyObject;
    return L;
}

NodePtr CreateNode(void *item) {
    NodePtr N = (NodePtr) malloc(sizeof(Node));
    N->item = item;
    return N;
}


void DestroyNode(ListPtr L, NodePtr node) {
    if (node == NULL) return;

    //free the job, then free the node
    L->DestroyObject(node->item);
    free(node);
}

void ListAddAtFront(ListPtr L, NodePtr node) {
	if (node == NULL) return;
	if (L != NULL) {
		node->next = L->head;
		L->head = node;
	}
}


Node *ListSearch(ListPtr L, void *obj) {

    Node *t = L->head;
    while (t) {
        if (L->Compar(t->item, obj) == 0) break;
        t = t->next;
    }

    return t;
}

void ListPrint(ListPtr L) {
    if (L == NULL) return;
    NodePtr n = L->head;
	while (n) {
        char *s = L->ToString(n->item);
		printf(" %s -->", s);
        free(s); //experiment removing this
		n = n->next;
	}
    printf(" NULL \n");
}


void DestroyList(ListPtr L) {
    if (L == NULL) return;
    NodePtr n = L->head;
	while (n) {
        NodePtr next = n->next;
        L->DestroyObject(n->item);
        free(n);
        n = next;
	}
    free(L);
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


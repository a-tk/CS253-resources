#include <stdio.h>
#include <stdlib.h>
#include "SinglyLinkedList.h"


ListPtr CreateList(char *(*ToString)(const void *), void (*DestroyObject)(void *)) {
    ListPtr L = (ListPtr) malloc(sizeof(List));
    L->head = NULL;
    L->ToString = ToString;
    L->DestroyObject = DestroyObject;
    return L;
}

NodePtr CreateNode(void *item) {
    NodePtr N = (NodePtr) malloc(sizeof(Node));
    N->item = item;
    return N;
}


void DestroyNode(NodePtr node) {
    if (node == NULL) return;

    //free the job, then free the node
    // TODO: freeJob(node->item);
    free(node);
}

void ListAddAtFront(ListPtr L, NodePtr node) {
	if (node == NULL) return;
	if (L != NULL) {
		node->next = L->head;
		L->head = node;
	}
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


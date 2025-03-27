#include <stdio.h>
#include <stdlib.h>

#include "SinglyLinkedList.h"


int main(int argc, char **argv) {
	int i;
	int n;
	ListPtr list;

	if (argc != 2) {
		fprintf(stderr, "Usage: %s <list size> \n", argv[0]);
		exit(1);
	}
	n = atoi(argv[1]);

	list = CreateList();
	for (i = 0; i < n; i++) {
		ListAddAtFront(list, CreateNode(n-i));
	}

	ListPrint(list);
    ListReverse(list);
	ListPrint(list);

	DestroyList(list);

	exit(0);
}

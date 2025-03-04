#include <stdio.h>
#include <stdlib.h>

#include "common.h"
#include "Job.h"
#include "Node.h"
#include "List.h"


int main(int argc, char **argv) {
	int i;
	int n;
	NodePtr node;
	JobPtr job;
	ListPtr list;

	if (argc != 2) {
		fprintf(stderr, "Usage: %s <list size> \n", argv[0]);
		exit(1);
	}
	n = atoi(argv[1]);

	list = createList();
	for (i = 0; i < n; i++) {
		job = createJob(i, "cmd args");
		node = createNode(job);
		addAtFront(list, node);
	}

	printList(list);

	freeList(list);

	exit(0);
}

#include <stdio.h>
#include <stdlib.h>
#include "SinglyLinkedList.h"
#include "Job.h"


int main(int argc, char **argv) {	
	int i;
	int n;
    ListPtr L;
	NodePtr node;
    JobPtr j;

	if (argc != 2) {
			fprintf(stderr, "Usage: %s <list size> \n",argv[0]);
			exit(1);
	}
	n = atoi(argv[1]);

	L = CreateList(jobToString, freeJob);

	for (i=0; i<n; i++) {
        j = createJob(i, " dummy job");

		node = CreateNode(j);

		if (node == NULL) {
			printf("Error allocating node for linked list\n");	
			exit(1);
		}
		ListAddAtFront(L, node);
	}

	if (n < 10) ListPrint(L);

    DestroyList(L);

	return 0;
}


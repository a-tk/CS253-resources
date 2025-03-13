#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "List.h"

const int NUM_TESTS = 7;
//const int DEBUG = 2;
const int DEBUG = 0;


/**
 * Print out stats for the random test.
 *
 * @param tests array of counters for each test type
 *
 * @return none
 */
void print_stats(int *tests)
{
    printf(" ========================\n");
    printf(" Function  #invocations\n");
    printf(" ========================\n");
    printf(" ListAddAtFront  %d \n", tests[0]);
    printf(" ListAddAtRear   %d \n", tests[1]);
    printf(" ListRemoveFront %d \n", tests[2]);
    printf(" ListRemoveRear  %d \n", tests[3]);
    printf(" ListRemoveNode  %d \n", tests[4]);
    printf(" ListReverse     %d \n", tests[5]);
    printf(" ListSearch      %d \n", tests[6]);
    printf(" ========================\n");
}


/**
 * Run random tests on the given list.
 *
 * @param count number of tests to run
 * @param seed  random seed
 * @param n     size of the list
 * @param list  pointer to the list
 *
 * @return none
 */

void runRandomTests(int count, unsigned int seed, int n, ListPtr list)
{
    int i;
    int test;
    Node *node;
    int *tests;

    tests = (int *) malloc(sizeof(int) * NUM_TESTS);
    for (i = 0; i < NUM_TESTS; i++)
		tests[i] = 0;

    srandom(seed);
	for (i = 0; i < count; i++) {
		printf("\rRunning test #%d", i);
		test = (int) (NUM_TESTS * (double) rand() / RAND_MAX);
		tests[test]++;
		switch (test) {
		case 0:
			if (DEBUG > 1)
				fprintf(stderr, "ListAddAtFront\n");
			n++;
			node = createNode(i);
			ListAddAtFront(list, node);
			break;
		case 1:
			if (DEBUG > 1)
				fprintf(stderr, "ListAddAtRear\n");
			n++;
			node = CreateNode(i);
			ListAddAtRear(list, node);
			break;
		case 2:
			if (DEBUG > 1)
				fprintf(stderr, "ListRemoveFront\n");
			node = ListRemoveFront(list);
			DestroyNode(node);
			break;
		case 3:
			if (DEBUG > 1)
				fprintf(stderr, "ListRemoveRear\n");
			node = ListRemoveRear(list);
			DestroyNode(node);
			break;
		case 4:
			if (DEBUG > 1)
				fprintf(stderr, "ListRemoveNode\n");
			node = ListRemoveNode(list, search(list, i));
			DestroyNode(node);
			break;
		case 5:
			if (DEBUG > 1)
				fprintf(stderr, "ListReverse\n");
			ListReverse(list);
			break;
		case 6:
			if (DEBUG > 1)
				fprintf(stderr, "ListSearch\n");
			node = ListSearch(list, i);
			break;
		default:
			break;
		}
	}
	printf("\n");
	print_stats(tests);
	free(tests);
}


int main(int argc, char **argv)
{
	int i;
	int n;
	int count;
	unsigned int seed = 0;

	Node *node;
	ListPtr list;

	if (argc < 2) {
		fprintf(stderr,
				"Usage: %s <list size> [<test size=list size>] [<seed>] \n",
				argv[0]);
		exit(1);
	}
	n = atoi(argv[1]);
	count = n;
	if (argc >= 3) {
		count = atoi(argv[2]);
	}
	if (argc == 4) {
		seed = (unsigned int) atoi(argv[3]);
	}

	list = createList();
	for (i = 0; i < n; i++) {
		node = createNode(i);
		addAtFront(list, node);
	}

	runRandomTests(count, seed, n, list);
	if (DEBUG > 0)
		printList(list);

	freeList(list);
	return 0;
}

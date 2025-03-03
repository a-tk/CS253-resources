#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "String.h"
#include "List.h"

/* 
 * macro to mimic the functionality of assert() from <assert.h>. The difference is that this version doesn't exit the program entirely.
 * It will just break out of the current function (or test case in this context).
 */
#define myassert(expr) if(!(expr)){ fprintf(stderr, "\t[assertion failed] %s: %s\n", __PRETTY_FUNCTION__, __STRING(expr)); return false; }

ListPtr testlist;

int testCount = 0;
int passCount = 0;

void printTestInfo(char* testName, char *info) {
	fprintf(stdout, "%s - %s\n", testName, info);
}

void printTestResult(char* testName, bool passed) {
	if(passed == true)
		fprintf(stdout, "%s - %s\n\n", "[PASSED]", testName);
	else
		fprintf(stdout, "%s - %s\n\n", "[FAILED]", testName);
}

/* Create a simple String for testing */
static StringPtr createTestString(char *source, int i) {
    char *s;
    asprintf(&s, "%s #%d", source, i);
    StringPtr string = CreateString(s);
    free(s);
    return string;
}

/* Test Case Definitions */

bool appendInEmptyList(void) {

	StringPtr obj = CreateString("test string");

    ListAppend(testlist, obj);

	myassert(testlist->size == 1)
	myassert(testlist->maxSize == DEFAULT_SIZE)
    StringPtr obj2 = ListGet(testlist, 0);
	myassert(obj == obj2)           //testing that the addresses are the same
	myassert(obj->s == obj2->s)     //testing that the addresses are the same
	myassert(strcmp(obj->s, obj2->s) == 0)      // contents are the same
	myassert(obj->length == obj2->length)       // contents are the same

	return true;
}

bool sortList(void) {
    int i;
    for (i = 0; i < 10; i++) {
        StringPtr obj = createTestString("test job", 9 - i); // "test job #xyz"

        ListAppend(testlist, obj);
    }

    ListSort(testlist);

    for (i = 0; i < 10; i++) {
        StringPtr obj = createTestString("test job", i);
        StringPtr found = ListGet(testlist, i);
        
	    myassert(strcmp(obj->s, found->s) == 0)
        DestroyString(obj);
    }

	return true;
}


/*
 * etc...
 */

void beforeTest(char* testName) {
	printTestInfo(testName, "Running...");
	testlist = CreateList();
	testCount++;
}

void afterTest(char* testName, bool result) {
	printTestResult(testName, result);
	DestroyList(testlist);
	passCount += result;
}

void runUnitTests(void) {
	bool result;
	char *testName;

	testName = "appendInEmptyList";
	beforeTest(testName);
	result = appendInEmptyList();
	afterTest(testName, result);

	testName = "sortList";
	beforeTest(testName);
	result = sortList();
	afterTest(testName, result);

	//etc...

	fprintf(stdout, "Test Cases: %d\n",  testCount);
	fprintf(stdout, "Passed: %d\n", passCount);
	fprintf(stdout, "Failed: %d\n", testCount - passCount);
}

int main(void) {
	runUnitTests();
	exit(0);
}

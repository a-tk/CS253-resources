#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

#include "ProcEntry.h"


ProcEntry *CreateProcEntry(void);


ProcEntry *CreateProcEntryFromFile(char statFile[]);


void DestroyProcEntry(void *entry);


char *ProcEntryToString(const void *entry);


int ProcEntryPidCompar(const void *a, const void *b);


int ProcEntryCommCompar(const void *a, const void *b);


bool ProcEntryZombieFilter(const void *entry);


bool ProcEntryNoFilter(const void *entry);
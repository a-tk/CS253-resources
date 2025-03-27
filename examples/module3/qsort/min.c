

/* Find min in v[0..size-1], assumes size is > 0 */
int min(void *v[], int size, int (*compare)(void *, void *)) {
    int i;
    int min = 0;
    for (i = 1; i < size; i++)
        if ((*compare)(v[i], v[min]) < 0)
        
            min = i;
    return min;
}
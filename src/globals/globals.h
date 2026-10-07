#ifndef GLOBALS_H
#define GLOBALS_H
#include <stdlib.h>

typedef struct hash_data {
    int global = 0;
    int *local;
    int **buckets;
    int bucketCount;
} HashData;

void reallocBucket(HashData* hash);

#endif
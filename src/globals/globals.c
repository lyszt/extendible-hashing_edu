#include "./globals.h" 


void reallocBucket(HashData* hash) {
    hash->bucketCount++;
    hash->buckets = realloc(hash->buckets, sizeof(int*) * hash->bucketCount);
}


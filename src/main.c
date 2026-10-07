#include "globals/globals.h"
#include <stdio.h>
#include <stdlib.h>
// my classes (wat)
#include "./globals/globals.h"

// Painfully implements extensible hashing to cause self suffering

int main(int argc, char *argv[]) {
  // What might one need to start his way of pain
  HashData *hash = calloc(1, sizeof(HashData));
  reallocBucket(hash);
  return 0;
}

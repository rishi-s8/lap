#include <stdio.h>
#include "veclib.h"

/*
 * Stores the difference in destVec
 * returns 1 on success, 0 on error
 */
int diffVec(float *aVec, float *bVec, float *destVec, unsigned int vecSize) {
    if (vecSize == 0) {
        return 0;
    }
    for (unsigned int i = 0; i < vecSize; ++i) {
        destVec[i] = aVec[i] - bVec[i];
    }
    return 1;
}
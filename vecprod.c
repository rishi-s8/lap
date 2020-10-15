#include <stdio.h>
#include "veclib.h"
#include <math.h>

/*
 * Stores the elementwise product in destVec
 * returns 1 on success, 0 on error
 */
int productVec(float *aVec, float *bVec, float *destVec, unsigned int vecSize)
{
    for(unsigned int i = 0; i<vecSize; i++)
    {
        destVec[i] = aVec[i]*bVec[i];
    }
    return 1;
}
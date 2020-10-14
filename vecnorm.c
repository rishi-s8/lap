#include <stdio.h>
#include "veclib.h"
#include <math.h>

float normVec(float *aVec, float *bVec, unsigned int vecSize)
{
    float norm = 0;
    for (unsigned int i = 0; i < vecSize; i++)
    {
        norm += pow(aVec[i] - bVec[i], 2);
    }
    return sqrt(norm);
}
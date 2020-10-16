#include <stdio.h>
#include "veclib.h"
#include <math.h>

/*
  // This program returns the dot product of two vectors.  
*/

float dotProductVec(float *aVec,float *bVec,unsigned int vecSize)
{	
    float dotProduct;
    for(unsigned int i = 0; i<vecSize; i++)
    {
        dotProduct = dotProduct+aVec[i]*bVec[i];
    }
    return dotProduct;
}

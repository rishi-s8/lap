#include <stdio.h>
#include "veclib.h"
#include <math.h>

/*
  // This program returns the dot product of two vectors.  
*/

float dotProductVec(float *vec1,float *vec2,unsigned int vecSize)
{	
    float dotProduct;
    for(unsigned int i = 0; i<vecSize; i++)
    {
        dotProduct = dotProduct+vec1[i]*vec2[i];
    }
    return dotProduct;
}

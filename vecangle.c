#include <stdio.h>
#include "veclib.h"
#include <math.h>

float angleVec(float *aVec, float *bVec, unsigned int vecSize) {
    float dotpr = 0;    
    float norma = 0;
    float normb = 0;
    float maga = 0;
    float magb = 0;
    float magpr = 0;
    float costheta = 0;
    float theta = 0;
    for (unsigned int i = 0; i < vecSize; i++) {
        dotpr += ((aVec[i])*(bVec[i]));   // dot product of two angles
        norma += pow(aVec[i], 2);
        normb += pow(bVec[i], 2);
    }
    maga = sqrt(norma);    // Magnitude of vector a
    magb = sqrt(normb);    // Magnitude of vector b
    magpr = maga*magb;     // product of magnitudes of vectors a & b
    costheta = dotpr/magpr;
    theta = acosf(costheta);  // the angle theta will be in radian
    return theta;
}

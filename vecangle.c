#include <stdio.h>
#include <math.h>

float angvec(float *aVec, float *bVec, unsigned int vecSize) {
    float dotpr = 0;    
    float norma = 0;
    float normb = 0;
    float maga = 0;
    float magb = 0;
    float magpr = 0;
    float costhita = 0;
    float thita = 0;
    for (unsigned int i = 0; i < vecSize; i++) {
        dotpr += ((aVec[i])*(bVec[i]));
        norma += pow(aVec[i], 2);
        normb += pow(bVec[i], 2);
    }
    maga = sqrt(norma);
    magb = sqrt(normb);
    magpr = maga*magb;
    costhita = dotpr/magpr;
    thita = acosf(costhita);  // angle thita will be in radian
    return thita;
}

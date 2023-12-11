#include "var.h"

void variance(int t[], int n, float* var) {

    float moy = 0;
    for(int i=0; i < n; i++) {
        moy += t[i];
    }
    
    moy = moy/n;
    float sum = 0;
    for(int i=0; i < n; i++) {
        sum += (t[i]-moy)*(t[i]-moy);
    }
    sum = sum/(n-1);
    *var = sum;

}

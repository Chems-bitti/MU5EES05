#include "min.h"

void minim(int t[], int n, int* min) {
    *min = t[0];
    for(int i=0; i < n; i++) {

        if (t[i] < *min) {
            *min = t[i];
        } 
    }

}
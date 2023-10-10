#include "var.h"

void main() {


    int tab[] = {2,5,7,2,9};
    float var = 0;
    variance(tab, 5, &var);
    printf("%f\n", var);
}
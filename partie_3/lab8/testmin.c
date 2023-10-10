#include "min.h"


void main() {
    int tab[] = {2,5,7,2,9};
    int min = 0;
    minim(tab, 5, &min);
    printf("%d\n", min);
}

#include "max.h"
#include "min.h"
#include "var.h"


void main() {
    int tab[] = {13, 12, 5, 1, 19, 13, 17};
    int n = 7;
    int max = 0;
    int min = 0;
    float var = 0;
    maxim(tab, n, &max);
    minim(tab, n, &min);
    variance(tab,n,&var);
    printf("Tab=[");
    for(int i=0; i < n-1; i++) {
        printf("%d, ", tab[i]);
    }
    printf("%d]\n", tab[n-1]);

    printf("max= %d\nmin= %d\nvar= %f\n", max, min, var);
}
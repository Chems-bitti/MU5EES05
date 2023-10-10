#include "min.h"
#include "max.h"
#include "var.h"

void main() {
    int tab[] = {4, 9, 10, 11, 12, 15, 12, 9, 0, 30};
    int n = 10;
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
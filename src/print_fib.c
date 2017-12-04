#include <stdio.h>
#include "fib.h"

int main(void) {

    printf("Length? ");
    int n = 0;
    scanf("%d", &n);
    n--;

    printf("[");
    for (int i = 0; i < n; i++ )
        printf("%d, ", fibcalc(i));
    
    if (n >= 0)
        printf("%d]\n", fibcalc(n));
    else printf("]\n");

    return 0;
}
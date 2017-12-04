#include <stdio.h>
#include <stdlib.h>
#include "fib.h"

int zeroth, first;
extern int largest_index_calculated;

static int n;
static int current;

void setStart() {

    printf("Starting values? ");
    int s = scanf("%d,%d", &zeroth, &first);
    //Two positive numbers should have been scanned.
    if(s != 2 || zeroth < 0 || first < 0){
        printf("Invalid input\n");
        exit(-1);
    }
        
}

void setLength() {
    
    largest_index_calculated = -1;
    printf("Length? ");
    int s = scanf("%d", &n);
    //One positive number should have been scanned.
    if (s != 1 || n < 0) {
        printf("Invalid input\n");
        exit(-1);
    }
    n--;

}

void calculateSequence() {
    
    printf("[");
    for (int i = 0; i < n; i++) {
        current = fibcalc(i);
        //Avoid overflowing integers.
        if (current < 0) {
            printf("Overflow\n");
            exit(-2);
        }
        //Numbers are followed by ", " (comma and space)
        printf("%i, ", current);
    }

    if (n >= 0) {
        current = fibcalc(n);
        //Avoid overflowing integers.
        if (current < 0) {
            printf("Overflow\n");
            exit(-2);
        }
        //The last number in the sequence is followed by ']' (square bracket)
        printf("%i]\n", current);
    }
    else printf("]\n");
    
}

int main(void) {

    while (1) {
        
        setStart();
        if (zeroth == 0 && first == 0)
            break;
        
        setLength();
        calculateSequence();
        
    }

    return 0;

}
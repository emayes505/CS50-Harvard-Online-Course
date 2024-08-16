#include <stdio.h>
#include <stdlib.h>

int **triangularSum(int *base, int n) {
    int **trisum = (int**)malloc(sizeof(int*) * n);
    int j = 0;
    for(int i = 0; i < n; i++) {
        trisum[i] = malloc(sizeof(int) * n - i);
    }
        while(j < n) {
        trisum[0][j] = base[j];
        j++;
    }
    for(int i = 1; i < n; i++) {
        trisum[i][]
    }
}


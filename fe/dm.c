#include <stdio.h>
#include <stdlib.h>

int ** triangularSum(int * base, int n) {
    int **triSum = (int**)malloc(sizeof(int*) * n);

    for (int i = 1; i < n; i++) {
        triSum[i] = (int*)malloc(sizeof(int*) * (n - i));
        if (i != 0) {
        for (int k = 0; k < n - i; k++) {
            triSum[i][k] = triSum[i-1][k] + triSum[i–1][k + 1];
        }
    
    }
}


int main() {
    int base[] = {1, 2, 3, 4, 5};
    int n = 5;
    triangularSum(base, n);
}

#include <stdio.h>
#include <stdlib.h>

int **triangularSum(int *base, int n) {
    int **trisum = (int**)malloc(sizeof(int*) * n);
    for(int i = 0; i < n; i++) {
        trisum[i] = malloc(sizeof(int) * (n - i));

        if(i == 0) {
            for(int j = 0; j < n; j++) {
                trisum[0][j] = base[j];
            }
        }
        else {
            for(int k = 0; k < n - i; k++) {
                printf("%d %d\n", trisum[i-1][k], trisum[i-1][k + 1]);
            trisum[i][k] = (trisum[i-1][k] + trisum[i-1][k + 1]);
            }
        }
    }
    return trisum;
}

int main() {
    int base[] = {1, 2, 3, 4, 5};
    int size = sizeof(base)/sizeof(base[0]);
    int **total = triangularSum(base, size);

    for (int i = 0; i < size; i ++) {
        for(int j = 0; j < size - i; j++) {
            printf("%d ", total[i][j]);
        }
        printf("\n");
    }

}


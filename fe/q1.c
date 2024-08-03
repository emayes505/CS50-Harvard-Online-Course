#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int ** arr1 = malloc(3 * sizeof(int *));
    for(int i = 0; i < 3; i++){
        arr1[i] = malloc(2 * sizeof(int));
        int *arr2 = malloc(3 * 2 * sizeof(int));
    }
}

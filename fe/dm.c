#include <stdio.h>
#include <stdlib.h>

int **triangularSum(int *base, int n) {
	int **res = (int**)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {

		for(int l = 0; l < n; l++) {
			res[i] = (int*)malloc(sizeof(int*) * (n - 1));
			if(i == 0) {
				for(int k = 0; k < n; k++) {
					res[i][k] = base[k];
				}
			}
		     else {
                for(int j = 0; j < n - i; j++) {
                    res[i][j] = res[i-1][j] + res[i-1][j + 1];
			}
		}

	}

}
return res;
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


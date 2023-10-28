#include <stdio.h>

int main() {
    int n;
    printf("Enter the limit: ");
    scanf("%d", &n);
    n = n*n*n;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                for (int l = k; l <= n; l++) {
                    if (i*i*i + j*j*j == k*k*k + l*l*l && i != k && j != l) {
                        printf("%d, ", i*i*i + j*j*j);
                    }// end if 
                }// end l loop
            }// end k loop
        }// end j loop
    }// end i loop

    return 0;
}// end main

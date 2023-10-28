#include <stdio.h>

void ascendingorder(int arr[100][100], int n) {
    int rowmin = 0, rowmax = n - 1, columnmin = 0, columnmax = n - 1, count = 1;

    while (count <= n * n) {
        for (int j = columnmin; j <= columnmax; j++, count++) {
            arr[rowmin][j] = count;
        }
        rowmin++;

        for (int i = rowmin; i <= rowmax; i++, count++) {
            arr[i][columnmax] = count;
        }
        columnmax--;

        for (int j = columnmax; j >= columnmin; j--, count++) {
            arr[rowmax][j] = count;
        }
        rowmax--;

        for (int i = rowmax; i >= rowmin; i--, count++) {
            arr[i][columnmin] = count;
        }
        columnmin++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }// end while loop
}// end asscending order function
void descendingorder(int brr[100][100], int n) {
    int rowmin = 0, rowmax = n - 1, columnmin = 0, columnmax = n - 1, count = n*n;
    printf("\n");
    while (count > 0) {
        for (int j = columnmax; j >= columnmin; j--, count--) {
            brr[rowmin][j] = count;
        }
        rowmin++;

        for (int i = rowmin; i <= rowmax; i++, count--) {
            brr[i][columnmin] = count;
        }
        columnmin++;

        for (int j = columnmin; j <= columnmax; j++, count--) {
            brr[rowmax][j] = count;
        }
        rowmax--;

        for (int i = rowmax; i >= rowmin; i--, count--) {
            brr[i][columnmax] = count;
        }
        columnmax--;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", brr[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter Size of Matrix:");
    scanf("%d", &n);

    int arr[100][100];
    int brr[100][100];
    
    ascendingorder(arr, n);
    descendingorder(brr, n);
    return 0;
}

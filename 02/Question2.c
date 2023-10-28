#include <stdio.h>

void printSubmatrix(int arr[7][7], int i, int j, int size) {
    printf("Dimension of 1s matrix is %d X %d\n", size, size);
    for (int x = i; x < i + size; x++) {
        for (int y = j; y < j + size; y++) {
            printf("%d\t", arr[x][y]);
        }
        printf("\n");
    }
}// end printing function

void findLargestSubmatrix(int n, int arr[7][7]) {
    int maxSize = 0, maxRow = 0, maxCol = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[i][j] == 1) {
                int size = 1;
                while (arr[i + size][j + size] == 1 && i + size < n && j + size < n) {
                    size++;
                
                if (size > maxSize) {
                    maxSize = size;
                    maxRow = i;
                    maxCol = j;}
					
                }// end while
            }// end checking condition 
        }// end j loop
    }// end i loop
	
// checking if maxsize is greater than zero if yes than print matrix and dimensions
    if (maxSize > 0) {
        printSubmatrix(arr, maxRow, maxCol, maxSize);
    } else {
        printf("No square submatrix of 1s found.\n");
    }
}// end findLargestSubmatrix

int main() {
    int n = 7;
    int arr[7][7] = {
        {0, 0, 1, 1, 1, 0, 0},
        {0, 0, 1, 1, 1, 0, 0},
        {0, 0, 1, 1, 1, 0, 0},
        {0, 0, 1, 1, 1, 0, 0},
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0}
    };

    findLargestSubmatrix(n, arr);

    return 0;
}

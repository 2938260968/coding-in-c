//Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main() {
    int r, c;

   
    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int matrix[r][c];
    int rowSum[r];  

   
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < r; i++) {
        rowSum[i] = 0;   
        for(int j = 0; j < c; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

   
    printf("Sum of each row:\n");
    for(int i = 0; i < r; i++) {
        printf("Rows %d sum = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}

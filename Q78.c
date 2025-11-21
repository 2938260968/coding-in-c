//Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int n;

    
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int A[n][n];
    int sum = 0;


    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    
    for(int i = 0; i < n; i++) {
        sum += A[i][i];
    }

   
    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}

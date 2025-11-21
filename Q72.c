//Find the sum of all elements in a matrix.

#include <stdio.h>

int main() {
    int r, c;

 
    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int matrix[r][c];

   
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            sum += matrix[i][j];
        }
    }

    printf("Sum of all elements: %d\n", sum);

    return 0;
}

//Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int r, c;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int A[r][c];

    
    printf("Enter matrix elements:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Diagonal Traversal:\n");

  
    for(int k = 0; k < c; k++) {
        int i = 0, j = k;
        while(i < r && j >= 0) {
            printf("%d ", A[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

 
    for(int k = 1; k < r; k++) {
        int i = k, j = c - 1;
        while(i < r && j >= 0) {
            printf("%d ", A[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}

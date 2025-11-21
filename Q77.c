//Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int n;


    printf("Enter the size (n x n): ");
    scanf("%d", &n);

    int A[n][n];
    int distinct = 1;   

    
    printf("Enter elements :\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(A[i][i] == A[j][j]) {
                distinct = 0;
                break;
            }
        }
        if(!distinct)
            break;
    }

    
    if(distinct)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are NOT distinct.\n");

    return 0;
}

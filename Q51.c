//Write a program to print the following pattern:
//    5
//   45
//  345
// 2345
//12345

#include <stdio.h>
int main() {
    int i, j, space, n = 5;
    for(i = 1; i <= n; i++) {
        for(space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for(j = n - i + 1; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
//Read and print elements of a one-dimensional array.

#include <stdio.h>

int main(){
    int marks[3];
    printf("Enter marks of 3 subjects:\n");
    for(int i=0; i<3; i++) {
        scanf("%d", &marks[i]);
    }

    printf("marks entered :\n");
    for(int i=0; i<3; i++) {
        printf("%d\n", marks[i]);
    }
    return 0;


}
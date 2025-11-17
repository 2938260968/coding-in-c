//Find the sum of array elements.

#include <stdio.h>
int main(){

    int arr[] = {1,3,5,7,9};
    int n=5, sum=0;

    for(int i=0; i<n; i++){
        sum=sum + arr[i];

    }
    printf("sum is : %d", sum);
    return 0;

}
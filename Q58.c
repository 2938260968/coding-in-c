//Find the maximum and minimum element in an array.

#include <stdio.h>

void elements(int arr[], int n);

int main(){
    int arr[]={10,20,30,40,50};
    elements(arr, 5);



    return 0;
}

void elements(int arr[], int n){
    int max = arr[0];
    int min = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];

        }
    }
    printf("maximum is : %d\n", max);
    printf("minimum is : %d\n", min);
}
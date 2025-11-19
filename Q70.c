//Rotate an array to the right by k positions.

#include <stdio.h>
void rotateArray(int arr[], int n, int k);
void printArray(int arr[], int n);

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=7;
    int k=3;
    rotateArray(arr,n,k);
    printArray(arr,n);

    return 0;
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d \t", arr[i]);
    }
}
void rotateArray(int arr[], int n, int k){
    k=k%n; 
    int temp[100];
    for(int i=0; i<n; i++){
        temp[(i+k)%n]=arr[i];
    }
    for(int i=0; i<n; i++){
        arr[i]=temp[i];
    }
}

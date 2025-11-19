//Reverse an array without taking extra space.

#include <stdio.h>
void reverseArray(int arr[], int n);
void printArray(int arr[], int n);

int main(){
    int arr[]={1,2,3,4,5,6,};
    reverseArray(arr,6);
    printArray(arr,6);



    return 0;
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d \t", arr[i]);
    }
}

void reverseArray(int arr[], int n){
    for(int i=0; i<n/2; i++){
        int firstVariable=arr[i];
        int secondVariable=arr[n-i-1];
        arr[i]=secondVariable;
        arr[n-i-1]=firstVariable;
    }
}
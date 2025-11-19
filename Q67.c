//insert an element in an array at a given position.

#include <stdio.h>

void insertAtPosition(int arr[], int* n, int element, int position);
void printArray(int arr[], int n);

int main(){
    int arr[100]={1,2,4,5,6};
    int n=5;
    int element=3;
    int position=2; 
    insertAtPosition(arr,&n,element,position);
    printArray(arr,n);

    return 0;
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d \t", arr[i]);
    }
}
void insertAtPosition(int arr[], int* n, int element, int position){
    for(int i=*n-1; i>=position; i--){
        arr[i+1]=arr[i];
    }
    arr[position]=element;
    (*n)++;
}
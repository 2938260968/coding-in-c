//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>
void insertInSortedArray(int arr[], int* n, int element);
void printArray(int arr[], int n);

int main(){
    int arr[100]={1,3,5,7,9};
    int n=5;
    int element=6;
    insertInSortedArray(arr,&n,element);
    printArray(arr,n);

    return 0;
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d \t", arr[i]);
    }
}
void insertInSortedArray(int arr[], int* n, int element){
    int i;
    for(i=*n-1; (i>=0 && arr[i]>element); i--){
        arr[i+1]=arr[i];
    }
    arr[i+1]=element;
    (*n)++;
}




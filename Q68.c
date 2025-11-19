//Delete an element from an array.

#include <stdio.h>
void deleteElement(int arr[], int* n, int element);
void printArray(int arr[], int n);

int  main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int element=5;
    deleteElement(arr,&n,element);
    printArray(arr,n);
    

    return 0;
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d \t", arr[i]);
    }
}

void deleteElement(int arr[], int* n, int element){
    int i, foundIndex=-1;
    for(i=0; i<*n; i++){
        if(arr[i]==element){
            foundIndex=i;
            break;
        }
    }
    if(foundIndex!=-1){
        for(i=foundIndex; i<*n-1; i++){
            arr[i]=arr[i+1];
        }
        (*n)--;
    }
}
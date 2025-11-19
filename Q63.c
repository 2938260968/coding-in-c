//Merge two arrays.

#include <stdio.h>
void mergeArrays(int arr1[], int n1, int arr2[], int n2, int mergedArr[]);
void printArray(int arr[], int n);

int main(){
    int arr1[]={1,3,5,7};
    int arr2[]={2,4,6,8,10,12};
    mergeArrays(arr1,4,arr2,6,arr1);
    printArray(arr1,10);

    return 0;
}


void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d \t", arr[i]);
    }
}

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int mergedArr[]){
    for(int i=0; i<n1; i++){
        mergedArr[i]=arr1[i];
    }
    for(int j=0; j<n2; j++){
        mergedArr[n1+j]=arr2[j];
    }
}
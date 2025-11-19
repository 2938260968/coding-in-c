//Search for an element in an array using linear search.

#include <stdio.h>
int linearSearch(int arr[], int n, int key);
int main(){
    int arr[]={4, 2, 7, 1, 9, 3, 5};
    int key=7;
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=linearSearch(arr, n, key);
    if(result!=-1){
        printf("Element found at index: %d\n", result);
    } else{
        printf("Element not found in the array.\n");
    }
    return 0;
}
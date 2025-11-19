//Search in a sorted array using binary search.

#include <stdio.h>

int binarySearch(int arr[], int n, int target);
void printResult(int index);

int main(){
    int arr[]={1,3,5,7,9,11,13,15,17,19};
    int target=7;
    int resultIndex=binarySearch(arr,10,target);
    printResult(resultIndex);

    return 0;
}
void printResult(int index){
    if(index!=-1){
        printf("Element found at index: %d\n", index);
    } else {
        printf("Element not found in the array.\n");
    }
}
int binarySearch(int arr[], int n, int target){
    int left=0;
    int right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==target){
            return mid;
        } else if(arr[mid]<target){
            left=mid+1;
        } else {
            right=mid-1;
        }
    }
    return -1;
}

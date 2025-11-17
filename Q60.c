//Count positive, negative, and zero elements in an array.

#include <stdio.h>

void countPosNegZero(int arr[], int n);

int  main(){
    int arr[]={1, -1, 3, 0, -5, 0, -4, 6, 0, -7, -8, 3};
    countPosNegZero(arr, 12);

    return 0;
}

void countPosNegZero(int arr[], int n){
    int positive=0;
    int Negative=0;
    int Zero=0;

    for(int i=0; i<n; i++){
        if(arr[i]>0){
            positive++;
        } else if(arr[i]<0){
            Negative++;
        } else{
            Zero++;
        }
        }
        printf("positive numbers are : %d\n", positive);
        printf("negative numbers are : %d\n", Negative);
        printf("zero numbers are : %d\n", Zero);
        }
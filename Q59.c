//Count even and odd numbers in an array.

#include <stdio.h>
void countEvenodd(int arr[], int n);

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8,  9,  };
    countEvenodd(arr, 9);

    return 0;
}

void countEvenodd(int arr[], int n){
    int even=0;
    int odd=0;

    for(int i=0; i<n; i++){
        if(arr[i] % 2==0){
            even++;
        } else{
            odd++;
        }
    }
    printf("even numbers are : %d\n", even);
    printf("odd numbers are : %d\n", odd);
}
// Write a program to find and display the sum of the first n natural numbers.

#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d", &n);
    int sum =0;
    for(int i=1; i<=n; i++){
        sum =sum+i;
    }
    printf("sum is :%d", sum);
    return 0;
}
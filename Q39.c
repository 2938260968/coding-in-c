//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main() {
    int n, product=1, r, count=0;
    printf("enter a number : ");
    scanf("%d", &n);
    while(n>0){
        r=n%10;
        if(r%2!=0){
            product=product*r;
            count++;
        }
        n=n/10;
    }
    if(count==0){
        printf("No odd digits found.\n");
    } else {
        printf("Product of odd digits is: %d\n", product);
    }
   
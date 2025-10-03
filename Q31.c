//Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
int main(){
    int n;
    int power=1;
    int i=0;
    int remainder;
    printf("enter a number : ");
    scanf("%d", &n);
    while(n>0){
        remainder=n%2;
        n=n/2;
        i+=(remainder*power);
        power=power*10;
        printf("%d\n", i);
    }
return 0;
}
   
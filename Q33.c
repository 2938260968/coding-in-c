//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>
int main() {
    int n,c,r,s=0;
    printf("enter a number : ");
    scanf("%d", &n);
    c=n;
    while(n>0){
        r=n%10;
        s=(r*r*r)+s;
        n=n/10;

    }
    if(c==s){
        printf("Armstrong number\n");
    }
    else{
        printf("not an Armstrong number\n");
    }
    return 0;
}
    
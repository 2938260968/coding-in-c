//Write a program to check if a number is a strong number.
#include <stdio.h>
int main(){
    int number, sum=1, digit, fact;
    printf("enter number:");
    scanf("%d", &number);
    while(number>0){
        digit=number%10;
        fact=1;
        for(int i=1; i<=digit; i++){
            fact=fact*i;
        }
        sum=sum+fact;
        number=number/10;
    }
    if(sum==number){
        printf("%d is a strong number", number);
    }
    else{
        printf("%d is not a strong number", number);
    }
    return 0;
}

    
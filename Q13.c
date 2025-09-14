// Write a program to input a year and check whether it is a leap year or not using conditional statements.

# include<stdio.h>
int main(){
    int year=2020;
    if((year%4==0 && year%100!=0) || (year%400==0)){
        printf("The year %d is a leap year\n", year);
    }
    else{
        printf("The year %d is not a leap year\n", year);
    }
    return 0;
}
// Write a program to input time in seconds and convert it to hours:minutes:seconds format.
# include<stdio.h>
int main(){
    int seconds;
    int hours, minutes;
    printf("enter time in seconds :");
    scanf("%d", &seconds);
    printf("given time in hours:minutes:seconds is : %d:%d:%d\n", seconds/3600, (seconds%3600)/60, (seconds%3600)%60);
    return 0;

}
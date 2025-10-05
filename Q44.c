//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main(){
    int n;
    float sum=1.0;
    printf("enter number of terms ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        sum=sum+(float)(2*i-1)/(2.0*i);
    }
    printf("sum of series is %.2f", sum);
    return 0;
}
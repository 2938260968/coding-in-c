//Q4: Write a program to calculate the area and circumference of a circle given its radius.
# include<stdio.h>
int main(){
    int radius;
    printf("enter radius :");
    scanf("%d", &radius);
    printf("area of circle is : %.2f\n", 3.14*radius*radius);
    printf("circumference is : %.2f\n", 2*3.14*radius);
    return 0;
}
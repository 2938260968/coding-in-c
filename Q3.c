// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
# include<stdio.h>
int main(){
    int length;
    int breadth;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d", &length, &breadth);
    printf("Area of rectangle is : %d\n", length*breadth);
    printf("perimeter is : %d\n", 2*(length+breadth));
    return 0;

}
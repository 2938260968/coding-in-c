// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
# include<stdio.h>
int main(){
    int a=3, b=3, c=3;
    if(a==b && b==c){
        printf("The triangle is Equilateral\n");
    }
    else if(a==b || b==c || a==c){
        printf("The triangle is Isosceles\n");
    }
    else{
        printf("The triangle is Scalene\n");
    }
    return 0;
}
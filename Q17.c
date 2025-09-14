// Write a program to find the roots of a quadratic equation and categorize them.
# include<stdio.h>
# include<math.h>
int main(){
    float a=1, b=-3, c=2;
    float discriminant = b*b - 4*a*c;
    if(discriminant > 0){
        float root1 = (-b + sqrt(discriminant)) / (2*a);
        float root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("The roots are real and different: root1 = %f, root2 = %f\n", root1, root2);
    }
    else if(discriminant == 0){
        float root = -b / (2*a);
        printf("The roots are real and the same: root = %f\n", root);
    }
    else{
        float realPart = -b / (2*a);
        float imagPart = sqrt(-discriminant) / (2*a);
        printf("The roots are complex: root1 = %f + %fi, root2 = %f - %fi\n", realPart, imagPart, realPart, imagPart);
    }
    return 0;
}
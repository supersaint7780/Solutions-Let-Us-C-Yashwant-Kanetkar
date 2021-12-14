#include <stdio.h>
#include <stdbool.h>
bool isValid(float a, float b, float c) {
    if((a+b>c) && (a+c>b) && (b+c>a))
        return true;
    else
        return false;
}
int main() {
    float side1, side2, side3;
    printf("enter the length of the sides of the triangle\n");
    scanf("%f %f %f",&side1,&side2,&side3);
    if(isValid(side1,side2,side3)) {
        if(side1==side2 && side2==side3)
            printf("equilateral triangle\n");
        else if(side1!=side2 && side2!=side3 && side1!=side3)
            printf("scalence triangle\n");
        else
            printf("isosceles triangle\n");
    }
    else {
        printf("the triangle is invalid\n");
    }
    return 0;
}
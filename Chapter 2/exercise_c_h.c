#include <stdio.h>

//function to find the absolute value of a function
float mod(float num) {
    return ((num>=0) ? num : (-num));
}
int main() {
    float num;
    printf("enter the number whose absolute value to be  calculated\n");
    scanf("%f",&num);
    printf("the absolute value of the entered number is %f\n",mod(num));
    return 0;
}
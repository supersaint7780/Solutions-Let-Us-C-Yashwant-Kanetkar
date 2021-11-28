#include <stdio.h>
#define PI 3.14159
int main() {
    float length,breadth,radius;
    printf("enter the length and breadth of the rectangle\n");
    scanf("%f %f", &length, &breadth);
    float area = length * breadth;
    printf("area of the rectangle is %f\n",area);
    printf("enter the radius of the circle \n");
    scanf("%f",&radius);
    area = PI * radius * radius;
    printf("area of the circle is %f\n",area);
    return 0;
}
#include <stdio.h>

int main() {
    float length, breadth;
    printf("enter the length and breadth of thr rectangle respectively\n");
    scanf("%f %f",&length,&breadth);
    float area = length * breadth;
    float perimeter = 2 * (length + breadth);
    if(area > perimeter)
        printf("the area of rectangle is greater than its perimeter\n");
    else if(area < perimeter)
        printf("the area of rectangle is less than its perimeter\n");
    else
        printf("the area of rectangle is equal to its perimeter\n");
    return 0;
}
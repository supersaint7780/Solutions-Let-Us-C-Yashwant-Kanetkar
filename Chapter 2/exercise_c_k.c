#include <stdio.h>
float square(float num) {
    return num * num;
}
int main() {
    float x1,y1,radius;
    printf("enter the coordinates of the center of the circle\n");
    scanf("%f %f",&x1,&y1);
    printf("enter the radius of the circle\n");
    scanf("%f",&radius);
    float x2,y2;
    printf("enter the point to be checked for\n");
    scanf("%f %f",&x2,&y2);
    float val = square(x2 - x1) + square(y2 - y1) - square(radius);
    if(val == 0)
        printf("the point lies on the circle\n");
    else if(val > 0)
        printf("the point lies outside the circle \n");
    else
        printf("the point lies inside the circle\n");
    return 0;
}
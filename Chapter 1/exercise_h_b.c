#include <stdio.h>

int main() {
    float distance = 0;
    printf("enter the distance between the two cities\n");
    scanf("%f",&distance);
    printf("distance in metres is %f m\n",(distance * 1000));
    printf("distance in centimetres is %f cm\n",(distance * 100000));

    return 0;
}
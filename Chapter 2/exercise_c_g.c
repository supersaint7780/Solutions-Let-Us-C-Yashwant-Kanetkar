#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter the 3 angles of the triangle\n");
    scanf("%d %d %d",&a, &b, &c);
    if(a+b+c == 180)
        printf("the triangle is valid\n");
    else
        printf("the triangle is not valid\n");
    return 0;
}
#include <stdio.h>
int max(int a,int b) {
    return (a>b) ? a : b;
}
int main() {
    int a,b,c;
    printf("enter the length of the 3 sides of the triangle\n");
    scanf("%d %d %d",&a,&b,&c);
    int largestSide = max(max(a,b), max(b,c));
    int sum = a + b + c;
    if(largestSide < sum - largestSide)
        printf("the triangle is valid\n");
    else
        printf("the triangle is not valid\n");
    return 0;
}
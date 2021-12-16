#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max = (a > b) ? a : b;
    int max1 = (b > c) ? b : c;
    int final = (max > max1) ? max : max1;
    printf("the greatest number is %d\n", final);
    return 0;
}
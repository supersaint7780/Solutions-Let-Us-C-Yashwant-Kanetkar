#include <stdio.h>

int main()
{
    int num = 0;
    printf("enter the number whose factorial is to be found\n");
    scanf("%d", &num);
    float factorial = 1;
    for (int i = 1; i <= num; i++)
        factorial *= i;
    printf("factorial of the number is %.0f\n", factorial);
    return 0;
}
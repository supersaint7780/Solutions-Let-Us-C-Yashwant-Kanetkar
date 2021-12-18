#include <stdio.h>

float factorial(int num)
{
    float fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    float expVal = 0;
    int num = 0;
    printf("enter the range up to which value is to be calculated\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        expVal += i / factorial(i);
    }
    printf("the value of the expression is %.10f \n", expVal);
    return 0;
}
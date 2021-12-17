#include <stdio.h>

//method to find power using recursion
double Pow(float base, int power)
{
    if (power == 0)
        return 1;
    else if (power % 2 == 0)
        return Pow(base, power / 2) * Pow(base, power / 2);
    else
        return base * Pow(base, power / 2) * Pow(base, power / 2);
}

//method to find power using loop
double loopPow(float base, int power)
{
    double value = 1;
    for (int i = 1; i <= power; i++)
    {
        value *= base;
    }
}
int main()
{
    float base = 0;
    int power = 0;
    printf("enter the number and the power to be raised to \n");
    scanf("%f %d", &base, &power);
    double value = loopPow(base, power);
    printf("%f raised to power %d is %f\n", base, power, value);
    return 0;
}

#include <stdio.h>
#include <math.h>
int main()
{
    float p = 0, r = 0, q = 0, n = 0;
    float amount = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("enter the principal amount\n");
        scanf("%f", &p);
        printf("enter the annaul rate of interest\n");
        scanf("%f", &r);
        printf("enter the time period of investment\n");
        scanf("%f", &n);
        printf("enter the period of compunding\n");
        scanf("%f", &q);
        amount = pow((1 + r / q * 0.01), n * q) * p;
        printf("Amount = %f\n",amount);
    }
    return 0;
}
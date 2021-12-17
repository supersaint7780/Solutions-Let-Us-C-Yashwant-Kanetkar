#include <stdio.h>

int main()
{
    int hours = 0, overtimePay = 0;
    for (int i = 1; i <= 10; i++)
    {
        printf("enter the hours worked by employee %d\n", i);
        scanf("%d", &hours);
        overtimePay = (hours - 40) * 12;
        printf("his overtime pay is %d\n", overtimePay);
    }
    return 0;
}
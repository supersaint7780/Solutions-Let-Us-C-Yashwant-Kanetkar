#include <stdio.h>
int getCube(int x)
{
    return x * x * x;
}
int checkArmstrong(int num)
{
    int sum = 0;
    int copyNum = num;
    while (num > 0)
    {
        sum += getCube(num % 10);
        num /= 10;
    }
    if (copyNum == sum)
        return 1;
    else
        return 0;
}
int main()
{
    for (int i = 1; i <= 500; i++)
    {
        if (checkArmstrong(i))
            printf("%d\n", i);
    }

    return 0;
}
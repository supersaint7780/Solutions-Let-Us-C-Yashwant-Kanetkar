#include <stdio.h>
int reverse(int num)
{
    int rev = 0;
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}
int main()
{
    int num = 0, octal = 0;
    printf("enter the number whose octal equivalent is to found\n");
    scanf("%d", &num);
    while (num > 0)
    {
        octal = (num % 8) + octal * 10;
        num /= 10;
    }
    printf("the octal equivalent of the entered number is %d\n", reverse(octal));
    return 0;
}
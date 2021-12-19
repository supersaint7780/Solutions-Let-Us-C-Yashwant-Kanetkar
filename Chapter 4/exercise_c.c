#include <stdio.h>

float factorial(int num)
{
    float f = 1;
    for (int i = 1; i <= num; i++)
    {
        f *= i;
    }
    return f;
}

int isPrime(int num)
{
    int c = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            c++;
    }
    if (c == 2)
        return 1;
    return 0;
}

int isEven(int num)
{
    if (num % 2 == 0)
        return 1;
    return 0;
}

int main()
{
    int choice = 0;
    int num = 0;
    int flag = 1;
    while (flag)
    {
        printf("enter 1 forfinding the factorial\n");
        printf("enter 2 to check if the number is prime or not\n");
        printf("enter 3 to check even or off\n");
        printf("enter 4 to exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("enter the number \n");
            scanf("%d", &num);
            printf("factorial of the number is %f\n", factorial(num));
            break;
        case 2:
            printf("enter the number \n");
            scanf("%d", &num);
            if (isPrime(num))
                printf("Prime number\n");
            else
                printf("Not Prime Number\n");
            break;
        case 3:
            printf("enter the number \n");
            scanf("%d", &num);
            if (isEven(num))
                printf("Even number\n");
            else
                printf("Odd number\n");
            break;
        case 4:
            flag = 0;
            break;
        default:
            printf("Invalid Input\n");
            flag = 0;
        }
    }

    return 0;
}
#include <stdio.h>
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

int main()
{
    int c = 0;
    printf("The prime numbers between 1 and 300\n");
    for(int i=1;i<=300;i++) {
        if(isPrime(i))
            printf("%d\n",i);
    }
    return 0;
}
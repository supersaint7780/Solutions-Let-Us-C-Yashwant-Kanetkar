#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int x = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 5; k >= i; k--)
        {
            printf(" ");
        }
        int copy = x;
        while (copy > 0)
        {
            printf("%d ", copy % 10);
            copy /= 10;
        }
        x *= 11;
        printf("\n");
    }
    return 0;
}
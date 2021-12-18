#include <stdio.h>

int main()
{
    for (int i = 1; i <= 300; i++)
    {
        for (int j = 1; j <= 60; j++)
        {
            printf("\u2665\u2666");
        }
        printf("\n");
    }
    return 0;
}
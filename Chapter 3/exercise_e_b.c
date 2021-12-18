#include <stdio.h>

int main()
{
    char ch = 1;
    for (int i = 0; i <= 1920; i++)
    {
        for (int j = 0; j <= 100; j++)
        {
            printf("%s", "\u263A");
        }
        printf("\n");
    }
    return 0;
}
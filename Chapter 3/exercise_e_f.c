#include <stdio.h>

int main()
{
    int c = -1;
    char a = 'G';
    for (char i = a; i >= 'A'; i--)
    {
        for (char x = 'A'; x <= i; x++)
        {
            printf("%c", x);
        }
        for (int j = 1; j <= c; j++)
        {
            printf(" ");
        }
        for (char y = i; y >= 'A'; y--)
        {
            if (y == a)
                continue;
            printf("%c", y);
        }
        c += 2;
        printf("\n");
    }
    return 0;
}
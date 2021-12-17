#include <stdio.h>

int main()
{
    for (unsigned char a = 0; a < 255; a++)
        printf("%d = %c\n", a, a);
    return 0;
}
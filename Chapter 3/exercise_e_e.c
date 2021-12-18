#include <stdio.h>

int main()
{
    float i = 0, x = 0, y = 0;
    printf("x\t\ty\t\ti\n");
    for (y = 1; y <= 6; y += 1)
    {
        for (x = 5.5; x <= 12.5; x += 0.5)
        {
            printf("%f\t%f\t%f\t\n", x, y, 2 + (y + 0.5 * x));
        }
    }
    return 0;
}
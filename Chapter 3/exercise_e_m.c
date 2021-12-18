#include <stdio.h>
#include <math.h>

int main()
{
    float x = 0;
    float val = 0;
    printf("enter the number whose natual log is to be found\n");
    scanf("%f", &x);
    for (int i = 1; i <= 7; i++)
    {
        float temp = (x - 1) / x;
        if (i == 1)
        {
            val += temp;
            continue;
        }
        val += pow(temp, i) / 2.0;
    }
    printf("the natural log value is %f\n",val);
    return 0;
}
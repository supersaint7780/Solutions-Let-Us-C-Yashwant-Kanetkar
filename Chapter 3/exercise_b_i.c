#include <stdio.h>

int main()
{
    int length = 0;
    printf("enter the length of the list\n");
    scanf("%d", &length);
    int a[length];
    printf("enter the elements of the list\n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", a + i);
    }
    int max = 0, min = 0;
    for (int i = 0; i < length; i++)
    {
        if (max < a[i])
            max = a[i];
        if (min > a[i])
            min = a[i];
    }
    printf("the range of the list is %d\n", (max - min));
    return 0;
}
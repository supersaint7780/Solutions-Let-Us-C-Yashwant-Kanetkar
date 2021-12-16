#include <stdio.h>

int main()
{
    int year;
    scanf("%d", &year);
    char *x = ((year % 400 == 0) || (year % 4 == 0 && year % 100 == 0)) ? "it is leap year" : "it is not a leap year";
    printf("%s\n",x);
    return 0;
}
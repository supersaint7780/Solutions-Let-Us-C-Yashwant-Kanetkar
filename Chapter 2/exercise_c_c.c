#include <stdio.h>

int main() {
    int year;
    printf("enter the year to be checked\n");
    scanf("%d",&year);
    if (year % 4 == 0 && year % 100 !=0)
        printf("it is a leap year \n");
    else if (year % 400 == 0)
        printf("it is a leap year\n");
    else
        printf("it is a not leap year \n");
    
    
    return 0;
}
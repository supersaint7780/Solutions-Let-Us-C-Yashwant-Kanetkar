#include <stdio.h>

int main() {
    int year;
    scanf("%d",&year); 
    if( (year%4==0 && year%100!=0) || (year%400==0) )
        printf("the entered year is a leap year\n");
    else
        printf("it is not a leap year\n");
    return 0;
}
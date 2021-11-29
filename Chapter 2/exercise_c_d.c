#include <stdio.h>

int main() {
    int year;
    printf("enter any year after 1900\n");
    scanf("%d",&year);
    int diff = year - 1900;
    int dayDiff = diff * 365 + diff/4;
    int day = dayDiff % 7;
    printf("the day on the week on the 1st january of this year is \n");
    switch(day) {
        case 0:
        printf("monday\n");
        break;
        case 1:
        printf("tuesday\n");
        break;
        case 2:
        printf("wednesday\n");
        break;
        case 3:
        printf("thursday\n");
        break;
        case 4:
        printf("friday\n");
        break;
        case 5:
        printf("saturay\n");
        break;
        case 6:
        printf("sunday\n");
        break;
    }
    return 0;
}
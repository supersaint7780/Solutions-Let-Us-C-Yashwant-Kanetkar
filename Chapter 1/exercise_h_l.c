#include <stdio.h>

int main() {
    float totalSp, totalProft, sp, totalCp, cp;
    int items;
    printf("enter the number of items sold\n");
    scanf("%d",&items);
    printf("enter the total selling price of the item\n");
    scanf("%f",&totalSp);
    printf("enter the total profit on the items sold\n");
    scanf("%f",&totalProft);
    sp = totalSp/items;
    totalCp = totalSp - totalProft;
    cp = totalCp/items;
    printf("the cost price of one single item is %f \n",cp);
    return 0;
}
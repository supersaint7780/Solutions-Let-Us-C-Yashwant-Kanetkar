#include <stdio.h>
//program to check wheather the seller has incurred a lost or profit
int main() {
    float sellingPrice, costPrice;
    printf("enter the cost price and selling price of the items\n");
    scanf("%f %f",&costPrice,&sellingPrice);
    if(sellingPrice-costPrice > 0) {
        printf("the seller has made a profit of %f\n",(sellingPrice-costPrice));
    }
    else if(sellingPrice-costPrice < 0) {
        printf("the seller has incurred a loss of %f\n",(costPrice-sellingPrice));
    }
    else {
        printf("the seller has neither made a loss nor a profit\n");
    }
    return 0;
}
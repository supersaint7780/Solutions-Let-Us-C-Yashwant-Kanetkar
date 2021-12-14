#include <stdio.h>

int main() {
    int order = 0, stock = 0, hasCredit = 0;
    printf("enter the amount of material ordered by customer\n");
    printf("amount of the material that is in the stock and available credit(1 for yes 0 for no)\n");
    scanf("%d %d %d",&order,&stock,&hasCredit);
    if(order<=stock && hasCredit)
        printf("Requirement supplied\n");
    else if(hasCredit && order>stock)
        printf("current stock shipped balance order will be shipped soon\n");
    else
        printf("the order cannot be processed due to lack of credit\n");
    return 0;
}
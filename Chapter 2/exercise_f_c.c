#include <stdio.h>

int main() {
    char gender,healthCondition,location;
    int age;
    printf("enter age of the consumer\n");
    scanf("%d",&age);
    printf("enter the gender of consumer M for male and F for female\n");
    scanf("%c",&gender);
    scanf("%c",&gender);
    printf("enter the health condition of the consumer A for excellent and B for poor\n");
    scanf("%c",&healthCondition);
    scanf("%c",&healthCondition);
    printf("enter C for city and V for village\n");
    scanf("%c",&location);
    scanf("%c",&location);

    short isInsured;
    int premium;
    int policyAmount;
    if(healthCondition=='A' && age>=25 && age<=35 && location=='C') {
        isInsured = 1;
        if(gender=='M') {
            premium = 4000;
            policyAmount = 200000;
        }
        else {
            policyAmount = 100000;
            premium = 3000;
        }
    }
    else if(healthCondition=='B' && location=='V' && gender=='M' && age>=25 && age<=35) {
        isInsured = 1;
        policyAmount = 10000;
        premium = 6000;
    }
    else {
        isInsured = 0;
    }
    
    if(isInsured) {
        printf("the person is insured\n");
        printf("policy amount is %d\n",policyAmount);
        printf("monthly premium is %d\n",premium);
    }
    else {
        printf("the person is not insured\n");
    }
    return 0;
}
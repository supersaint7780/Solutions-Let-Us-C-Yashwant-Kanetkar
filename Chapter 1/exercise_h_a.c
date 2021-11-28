#include <stdio.h>

int main() {
    int salary;
    float da,hra;
    printf("enter Ramesh's salary\n");
    scanf("%d",&salary);
    da = 0.2 * salary;
    hra = 0.4 * salary;
    float gross = salary + da + hra;
    printf("Ramesh's gross salary is %f \n",gross);
    return 0;
}
#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    int lastDigit = 0;
    int firstDigit = num%10;
    while(num>0) {
        lastDigit = num%10;
        num/=10;
    }
    printf("The sum of first and last digit of the entered number is %d\n",(firstDigit+lastDigit));
    return 0;
}
#include <stdio.h>

int main() {
    int num;
    printf("enter the number to be checked for\n");
    scanf("%d",&num);
    if(num % 2 == 0) {
        printf("the entered number is even.\n");
    }
    else {
        printf("the entered number is odd \n");
    }
    return 0;
}
#include <stdio.h>

int main() {
    int days;
    int fine;
    printf("enter the number of days \n");
    scanf("%d",&days);
    if(days>30) {
        printf("your membership stands cancelled\n");
    }
    else {
        if(days>=0 && days<=5)
            fine = 50;
        else if(days>5 && days<=10)
            fine = 100;
        else if(days>10)
            fine = 500;
        printf("the fine is %d\n",fine);
    }
    return 0;
}
#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    int revNum = 0;
    int temp = num;
    int dig = 0;
    while(temp>0) {
        dig = temp%10;
        revNum = revNum*10 + dig;
        temp/=10;
    }
    printf("The number after reversing it is %d\n",revNum);
    return 0;
}

#include <stdio.h>

int main() {
    int time;
    printf("enter the time (in hours) taken by the employee to complete the task\n");
    scanf("%d",&time);
    if(time<=3)
        printf("Highly Efficient\n");
    else if(time>3 && time<=4)
        printf("Improve your speed\n");
    else if(time>4 && time<=5)
        printf("You need to undergo training for speed improvement\n");
    else
        printf("you are fired fro the company\n"); 
    return 0;
}
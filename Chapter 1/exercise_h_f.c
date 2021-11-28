#include <stdio.h>

int main() {
    int c,d;
    printf("enter the values of c and d\n");
    scanf("%d %d",&c, &d);
    int temp = c;
    c = d;
    d = temp;
    printf("new values of c and d are %d and %d\n",c,d);
    return 0;
}
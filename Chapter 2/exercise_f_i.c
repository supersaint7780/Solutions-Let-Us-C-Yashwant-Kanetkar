#include <stdio.h>

int main() {
    int a = 0, b = 0;
    printf("enter the marks in subject a and subject b\n");
    scanf("%d %d", &a, &b);
    if(a>55 && b>45)
        printf("Passed\n");
    else if(a==55 && b>55)
        printf("Passes\n");
    else if(a>65 && b<=45)
        printf("he is allowed to reappear in examination B\n");
    else
        printf("Failed\n");
    return 0;
}
#include <stdio.h>

int main() {
    int amount = 0;
    scanf("%d",&amount);
    printf("Number of 100 rs notes that can be given %d\n",(amount/100));
    printf("Number of 50 rs notes that can be given %d\n",(amount/50));
    printf("Number of 10 rs notes that can be given %d\n",(amount/10));
    return 0;
}
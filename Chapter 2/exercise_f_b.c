#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    if(a>=65 && a<=90)
        printf("uppercase character\n");
    else if(a>=97 && a<=122)
        printf("lowercase letter\n");
    else if(a>=48 && a<=57)
        printf("it is a digit\n");
    else
        printf("it is a special symbol\n");
    return 0;
}
#include <stdio.h>

int main()
{
    char ch = getchar();
    char *x = ((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90)) ? "this is not a special symbol" : "this is a special symbol";
    printf("%s\n",x);
    return 0;
}
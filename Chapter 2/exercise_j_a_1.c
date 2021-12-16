#include <stdio.h>

int main() {
    char ch = getchar();
    char * x = (ch>=97 && ch<=122) ? "this is a lowercase letter": " this is not lowercase later";
    printf("%s\n",x);
    return 0;
}
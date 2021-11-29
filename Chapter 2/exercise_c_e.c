#include <stdio.h>

//function to get the reverse of a number
int reverse(int num) {
    int rev = 0;
    while(num > 0) {
        rev = rev * 10 + num % 10;
        num/=10; 
    }
    return rev;
}
int main() {
    int num = 0;
    printf("enter the number to be reversed\n");
    scanf("%d",&num);
    int revNum = reverse(num);
    printf("the reversed number is %d\n",revNum);
    if(revNum == num)
        printf("the number is a palindrome number\n");
    else
        printf("the number is not a palindrome number\n");
    
    return 0;
}
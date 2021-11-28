#include <stdio.h>

int main() {
	int num = 0;
	scanf("%d",&num);
	int digSum = 0;
	while(num>0) {
		digSum+=num%10;
		num/=10;
	}
	printf("The sum of the digits of the number is %d\n",digSum);
	return 0;
}
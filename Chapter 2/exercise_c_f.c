#include <stdio.h>

//function to get the max of two numbers
int min(int num1,int num2) {
    return (num1 < num2) ? num1 : num2;
}
int main() {
    int ram, shyam, arun;
    printf("enter the age of ram, shyam and arun respectively\n");
    scanf("%d %d %d",&ram,&shyam,&arun);
    int youngestAge = min( min(ram, shyam), min(shyam, arun) );
    if(ram==shyam && shyam==arun)
        printf("all 3 are of the same age\n");
    else {
        if(ram == youngestAge)
            printf("ram is the youngest\n");
        if(arun == youngestAge)
            printf("arun is the youngest\n");
        if(shyam == youngestAge)
            printf("shyam is the youngest\n");
    }
    return 0;
}
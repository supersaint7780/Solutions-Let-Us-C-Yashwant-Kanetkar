#include <stdio.h>

int main() {
    int maths,chemistry,physics,biology,english;
    printf("enter the marks in maths, physics, chemistry, biology, englsih\n");
    scanf("%d %d %d %d %d",&maths,&physics,&chemistry,&biology,&english);
    int aggregate = maths + physics + chemistry +biology + english;
    float percentage  = aggregate / 5.0;
    printf("aggregate marks of the student is %d\n",aggregate);
    printf("percentage marks of the student is %f \n",percentage);
    return 0;
}
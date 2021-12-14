#include <stdio.h>
#include <stdbool.h>

bool condition1(float hardness) {
    bool x = false;
    if(hardness > 50)
        x = true;
    return x;
}
bool condition2(float carbonContent) {
    bool x = false;
    if(carbonContent < 0.7)
        x = true;
    return x;
}
bool condition3(float strength) {
    bool x = false;
    if(strength > 5600)
        x = true;
    return x;
}
int main() {
    float carbonContent, strength, hardness;
    int grade;
    printf("enter the hardness of the \n");
    scanf("%f",&hardness);
    printf("enter the carbon content of the steel\n");
    scanf("%f",&carbonContent);
    printf("enter the strength of the steel\n");
    scanf("%f",&strength);

    if(condition1(hardness) && condition2(carbonContent) && condition3(strength))
        grade = 10;
    else if(condition1(hardness) && condition2(carbonContent) && !condition3(strength))
        grade = 9;
    else if(!condition1(hardness) && condition2(carbonContent) && condition3(strength))
        grade = 8;
    else if(condition1(hardness) && !condition2(carbonContent) && condition3(strength))
        grade = 7;
    else if(!condition1(hardness) && !condition2(carbonContent) && !condition3(strength))
        grade = 5;
    else
        grade = 6;

    printf("grade of steel is %d\n",grade);
    return 0;
}
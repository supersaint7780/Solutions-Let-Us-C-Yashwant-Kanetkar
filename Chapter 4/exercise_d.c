#include <stdio.h>

int main()
{
    int class = 0, subjectFailed = 0;
    printf("Enter the class of student\n");
    scanf("%d", &class);
    printf("Enter the number of subject in student has failed\n");
    scanf("%d", &subjectFailed);
    switch (class)
    {
    case 1:
        if (subjectFailed > 3)
            printf("No grace\n");
        else
            printf("5 marks grace per subject\n");
        break;
    case 2:
        if (subjectFailed > 2)
            printf("No grace\n");
        else
            printf("4 marks grace per subject\n");
        break;
    case 3:
        if (subjectFailed > 1)
            printf("No grace\n");
        else
            printf("5 marks grace per subject\n");
        break;
    default:
    }
    return 0;
}
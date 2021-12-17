#include <stdio.h>

int main()
{
    int positives = 0, zeroes = 0, negatives = 0;
    int input = 0;
    int check = 0;
    do
    {
        scanf("%d", &input);
        if (input > 0)
            positives++;
        else if (input < 0)
            negatives++;
        else
            zeroes++;
        printf("enter 1 to continue and 0 to stop\n");
        scanf("%d", &check);
    } while (check);
    printf("Total positive numbers %d\n", positives);
    printf("total negative numbers %d\n", negatives);
    printf("Total zeroes %d\n", zeroes);

    return 0;
}
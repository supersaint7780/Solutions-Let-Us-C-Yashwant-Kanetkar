#include <stdio.h>

int main()
{
    printf("You have 21 matchsticks.\n You have to choose either 1,2,3 or 4 matchsticks.\n");
    printf("The person who chooses the last matchstick loses.\n");
    printf("Let us Begin\n");
    int matchsticks = 21;
    int userChoice = 0;
    for (int i = 1; i < 5; i++)
    {
        printf("Choose matchsticks\n");
        scanf("%d", &userChoice);
        if (userChoice > 4)
        {
            printf("Inalid Choice\n");
            break;
        }
        matchsticks -= userChoice;
        printf("Remaining matchsticks are %d\n", matchsticks);
        printf("The computer chose %d\n", 5 - userChoice);
        matchsticks += (userChoice - 5);
        printf("Remaining matchsticks are %d\n", matchsticks);
    }
    printf("Last Stick remaining to choose\n");
    printf("You Lose\n");
    return 0;
}
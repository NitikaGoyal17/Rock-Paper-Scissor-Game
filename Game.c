#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int greater(char char1, char char2)
{
    if (char1 == char2)
    {
        return -1;
    }
    if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int playerScore = 0, compScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to the Rock, Paper, Scissors.\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Player's Turn:\n");
        printf("Chooose 1 for rock, 2 for paper and 3 for scissors\n");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf("You choose %c\n\n", playerChar);

        printf("Computer's Turn:\n");
        printf("Chooose 1 for rock, 2 for paper and 3 for scissors\n");
        temp = generateRandomNumber(3) + 1;
        compChar = dict[temp - 1];
        printf("CPU choose %c\n\n", compChar);

        if (greater(compChar, playerChar) == 1)
        {
            compScore == 1;
            printf("CPU Got it!\n\n");
        }
        else if (greater(compChar, playerChar) == -1)
        {
            compScore += 1;
            playerScore += 1;
            printf("Its a draw\n\n");
        }
        else
        {
            playerScore += 1;
            printf("You got it!\n\n");
        }
        printf("You: %d\nCPU: %d\n", playerScore, compScore);
    }
    if (playerScore > compScore)
    {
        printf("You Win the game!\n");
    }
    else if (playerScore < compScore)
    {
        printf("CPU win the game!\n");
    }
    else
    {
        printf("It's a draw.\n");
    }
    return 0;
}

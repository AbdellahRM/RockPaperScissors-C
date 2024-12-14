#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int Player, Computer;

    srand(time(NULL));

    printf("Player Paper=1 Rock=2 Scissors=3   :");

    scanf("%d", &Player);

    Computer = rand() % 3 + 1;

    if (Computer == 1)
    {
        printf("Computer choses  Paper\n");
    }

    else if (Computer == 2)
    {
        printf("Computer choses Rock\n");
    }
    else if (Computer == 3)
    {
        printf("Computer choses Scissor\n");
    }

    if (Player == Computer)
    {
        printf("Tie");
    }
    else if (Player == 1 && Computer == 2)
    {
        printf("Player Won\n");
    }
    else if (Player == 1 && Computer == 3)
    {
        printf("Computer won\n");
    }
    else if (Player == 2 && Computer == 3)
    {
        printf("Player won\n");
    }
    else if (Player == 2 && Computer == 1)
    {
        printf("Computer Won\n");
    }
    else if (Player == 3 && Computer == 1)
    {
        printf("Player won\n");
    }
    else if (Player == 3 && Computer == 2)
    {
        printf("Computer won\n");
    }
    system("pause");
}

#include <stdio.h>
#include <stdlib.h>

void tieGame();
void winGame();
void loseGame();

int main()
{
    int option = 0;
    int compOption = 0;

    printf("Please type out which option you'd like\n");
    printf("1: Rock\n");
    printf("2: Paper\n");
    printf("3: Scissors\n");
    printf("4: Quit\n");

    srand(time(NULL));

    while(option != 4)
    {
    compOption = ((rand() % 3)+1);


    scanf("%i", &option);
    switch(option)
    {
    case 1: // Rock
        printf("You chose rock.\n");
        if(compOption == 1)
        {
            printf("Computer chose rock too!\n");
            tieGame();
        } else if (compOption == 2) {
            printf("Computer chose paper!\n");
            loseGame();
        } else if (compOption == 3) {
            printf("Computer chose scissors!\n");
            winGame();
        } else {
            invalidInput();
        }
        break;
    case 2: // Paper
        printf("You chose paper.\n");
        if(compOption == 2)
        {
            printf("Computer chose paper too!\n");
            tieGame();
        } else if (compOption == 1) {
            printf("Computer chose rock!\n");
            winGame();
        } else if (compOption == 3) {
            printf("Computer chose scissors!\n");
            loseGame();
        } else {
            invalidInput();
        }
        break;
    case 3: // Scissors
        printf("You chose scissors.\n");
        if(compOption == 3)
        {
            printf("Computer chose scissors too!\n");
            tieGame();
        } else if (compOption == 1) {
            printf("Computer chose rock!\n");
            loseGame();
        } else if (compOption == 2) {
            printf("Computer chose paper!\n");
            winGame();
        } else {
            invalidInput();
        }
        break;
    }
    }
    getchar();
    return 0;
}

void tieGame()
{
    printf("It's a tie!\n");
}

void loseGame()
{
    printf("You lose!\n");
}

void winGame()
{
    printf("You win!\n");
}

void invalidInput()
{
    printf("Invalid input, please try again!\n");
}

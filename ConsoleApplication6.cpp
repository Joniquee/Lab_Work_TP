#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>


int start_game() {
    int n = 0;
    printf("Main menu:\n");
    printf("1 - rules of game\n");
    printf("2 - start game\n");
    printf("3 - exit\n");
    printf("Select the key: ");
    scanf_s("%d", &n);
    switch (n) {
    case 1:
        printf("\nHere are the rules of the game:\n\n");
        printf("1.The student and HSE take turns taking the cards on which the subject is indicated (M,LI,Tp,En,D,O).\n\n");
        printf("2.The goal of the game is to collect the optimal number of items per day in order to gain enough knowledge and not fly out after the session. \n\n");
        printf("3.Each card has its own level of knowledge (seminars cost 1 level of knowledge less).\n M-11, Li-3, Tp- 8, En- 7, D- 4, O-2.\n\n");
        printf("4.The student who gained more knowledge than HSE won and successfully passed the session. Similarly, if a student scores exactly 21 points in knowledge.\n\n");
        printf("5.If a student has more than 21 points in knowledge, he loses HSE and goes to retake.\n\n");
        start_game();
        return n;
        break;
    case 2:
        printf("\nWelcome to Game 21!\n");
        return n;
        break;
    case 3:
        return n;
        break;
    }
}


void matlec(char*** card)
{
    char** piki5 = (char**)malloc(10 * sizeof(char*));
    for (int i = 0; i < 10; i++) {
        piki5[i] = (char*)malloc(16 * sizeof(char));
    }

    sprintf(piki5[0], "###############");
    sprintf(piki5[1], "#      #      #");
    sprintf(piki5[2], "#  @   #   @  #");
    sprintf(piki5[3], "#  @@     @@  #");
    sprintf(piki5[4], "#  @ @   @ @  #");
    sprintf(piki5[5], "#  @  @ @  @  #");
    sprintf(piki5[6], "#  @   @   @  #");
    sprintf(piki5[7], "#  @       @  #");
    sprintf(piki5[8], "#             #");
    sprintf(piki5[9], "###############");

    *card = piki5;
}
void matsem(char*** card)
{
    char** piki6 = (char**)malloc(10 * sizeof(char*));
    for (int i = 0; i < 10; i++) {
        piki6[i] = (char*)malloc(16 * sizeof(char));
    }

    sprintf(piki6[0], "###############");
    sprintf(piki6[1], "#             #");
    sprintf(piki6[2], "#  @       @  #");
    sprintf(piki6[3], "#  @@     @@  #");
    sprintf(piki6[4], "#  @ @   @ @  #");
    sprintf(piki6[5], "#  @  @ @  @  #");
    sprintf(piki6[6], "#  @   @   @  #");
    sprintf(piki6[7], "#  @       @  #");
    sprintf(piki6[8], "#             #");
    sprintf(piki6[9], "###############");

    *card = piki6;
}
void linlec(char*** card)
{
    char** piki6 = (char**)malloc(10 * sizeof(char*));
    for (int i = 0; i < 10; i++) {
        piki6[i] = (char*)malloc(16 * sizeof(char));
    }
    sprintf(piki6[0], "###############");
    sprintf(piki6[1], "#      #      #");
    sprintf(piki6[2], "#  @   #      #");
    sprintf(piki6[3], "#  @       @  #");
    sprintf(piki6[4], "#  @          #");
    sprintf(piki6[5], "#  @       @  #");
    sprintf(piki6[6], "#  @       @  #");
    sprintf(piki6[7], "#  @@@@@   @  #");
    sprintf(piki6[8], "#             #");
    sprintf(piki6[9], "###############");


    *card = piki6;
}
void linsem(char*** card)
{
    char** piki6 = (char**)malloc(10 * sizeof(char*));
    for (int i = 0; i < 10; i++) {
        piki6[i] = (char*)malloc(16 * sizeof(char));
    }
    sprintf(piki6[0], "###############");
    sprintf(piki6[1], "#             #");
    sprintf(piki6[2], "#  @          #");
    sprintf(piki6[3], "#  @       @  #");
    sprintf(piki6[4], "#  @          #");
    sprintf(piki6[5], "#  @       @  #");
    sprintf(piki6[6], "#  @       @  #");
    sprintf(piki6[7], "#  @@@@@   @  #");
    sprintf(piki6[8], "#             #");
    sprintf(piki6[9], "###############");


    *card = piki6;
}
void tplec(char*** card)
{
    char** piki6 = (char**)malloc(10 * sizeof(char*));
    for (int i = 0; i < 10; i++) {
        piki6[i] = (char*)malloc(16 * sizeof(char));
    }
    sprintf(piki6[0], "###############");
    sprintf(piki6[1], "#      #      #");
    sprintf(piki6[2], "#      #      #");
    sprintf(piki6[3], "#  @@@@@      #");
    sprintf(piki6[4], "#    @        #");
    sprintf(piki6[5], "#    @  @@@   #");
    sprintf(piki6[6], "#    @  @  @  #");
    sprintf(piki6[7], "#       @@@   #");
    sprintf(piki6[8], "#       @     #");
    sprintf(piki6[9], "###############");


    *card = piki6;
}
void tpsem(char*** card)
{
    char** piki6 = (char**)malloc(10 * sizeof(char*));
    for (int i = 0; i < 10; i++) {
        piki6[i] = (char*)malloc(16 * sizeof(char));
    }
    sprintf(piki6[0], "###############");
    sprintf(piki6[1], "#             #");
    sprintf(piki6[2], "#             #");
    sprintf(piki6[3], "#  @@@@@      #");
    sprintf(piki6[4], "#    @        #");
    sprintf(piki6[5], "#    @  @@@   #");
    sprintf(piki6[6], "#    @  @  @  #");
    sprintf(piki6[7], "#       @@@   #");
    sprintf(piki6[8], "#       @     #");
    sprintf(piki6[9], "###############");


    *card = piki6;
}

void ensem(char*** card)
{
    char** piki6 = (char**)malloc(10 * sizeof(char*));
    for (int i = 0; i < 10; i++) {
        piki6[i] = (char*)malloc(16 * sizeof(char));
    }
    sprintf(piki6[0], "###############");
    sprintf(piki6[1], "#             #");
    sprintf(piki6[2], "#             #");
    sprintf(piki6[3], "#  @@@@       #");
    sprintf(piki6[4], "#  @          #");
    sprintf(piki6[5], "#  @@@   @@   #");
    sprintf(piki6[6], "#  @     @ @  #");
    sprintf(piki6[7], "#  @@@@  @ @  #");
    sprintf(piki6[8], "#             #");
    sprintf(piki6[9], "###############");


    *card = piki6;
}

void dissem(char*** card)
{
    char** piki6 = (char**)malloc(10 * sizeof(char*));
    for (int i = 0; i < 10; i++) {
        piki6[i] = (char*)malloc(16 * sizeof(char));
    }
    sprintf(piki6[0], "###############");
    sprintf(piki6[1], "#             #");
    sprintf(piki6[2], "#             #");
    sprintf(piki6[3], "#   @@@@      #");
    sprintf(piki6[4], "#   @   @     #");
    sprintf(piki6[5], "#   @    @    #");
    sprintf(piki6[6], "#   @   @     #");
    sprintf(piki6[7], "#   @@@@      #");
    sprintf(piki6[8], "#             #");
    sprintf(piki6[9], "###############");


    *card = piki6;
}
void ORG(char*** card)
{
    char** piki6 = (char**)malloc(10 * sizeof(char*));
    for (int i = 0; i < 10; i++) {
        piki6[i] = (char*)malloc(16 * sizeof(char));
    }
    sprintf(piki6[0], "###############");
    sprintf(piki6[1], "#             #");
    sprintf(piki6[2], "#    @@@@@    #");
    sprintf(piki6[3], "#   @     @   #");
    sprintf(piki6[4], "#  @       @  #");
    sprintf(piki6[5], "#  @       @  #");
    sprintf(piki6[6], "#   @     @   #");
    sprintf(piki6[7], "#    @@@@@    #");
    sprintf(piki6[8], "#             #");
    sprintf(piki6[9], "###############");


    *card = piki6;
}


void game() {
    int playerScore = 0, computerScore = 0;
    int card, choice, additionalCards;
    char playAgain;
    char** coloda[5] = { 0 };
    int h = 0;

    srand(time(NULL));


    playerScore = 0;
    computerScore = 0;
    additionalCards = 1;




    while (additionalCards)
    {

        printf("\nYour move. Get a card? [1 - Yes / 0 - No]: ");


        scanf_s("%d", &choice);
        system("cls");

        if (choice == 1) {
            card = rand() % 9 + 1;

            if (card == 6) {
                card = 2;
                ORG(&coloda[h]);
            }
            else if (card == 7) {
                card = 3;
                ensem(&coloda[h]);
            }
            else if (card == 8) {
                card = 4;
                dissem(&coloda[h]);
            }
            else if (card == 1) {
                card = 6;
                tpsem(&coloda[h]);
            }
            else if (card == 2) {
                card = 7;
                tplec(&coloda[h]);
            }
            else if (card == 3) {
                card = 8;
                linsem(&coloda[h]);
            }
            else if (card == 4) {
                card = 9;
                linlec(&coloda[h]);
            }
            else if (card == 5) {
                card = 10;
                matsem(&coloda[h]);
            }
            else if (card == 9) {
                card = 11;
                matlec(&coloda[h]);
            }

            printf("Your card:\n");
            for (int i = 0; i < 10; i++)
            {
                if (coloda[4] != 0)
                {
                    printf("%s %s %s %s %s\n", coloda[0][i], coloda[1][i], coloda[2][i], coloda[3][i], coloda[4][i]);

                }
                else if (coloda[3] != 0)
                {
                    printf("%s %s %s %s\n", coloda[0][i], coloda[1][i], coloda[2][i], coloda[3][i]);

                }
                else if (coloda[2] != 0)
                {
                    printf("%s %s %s\n", coloda[0][i], coloda[1][i], coloda[2][i]);

                }
                else if (coloda[1] != 0)
                {
                    printf("%s %s\n", coloda[0][i], coloda[1][i]);

                }
                else if (coloda[0] != 0)
                {
                    printf("%s\n", coloda[0][i]);

                }
            }

            h++;
            playerScore += card;
        }
        else {
            additionalCards = 0;
        }

        if (playerScore <= 21 && additionalCards && computerScore < 18) {
            card = rand() % 9;

            if (card == 8) {
                card = 2;
            }
            else if (card == 9) {
                card = 3;
            }
            else if (card == 10) {
                card = 4;
            }
            else if (card == 11) {
                card = 11;
            }

            computerScore += card;
        }

        printf("The number of your points at the moment %d\n", playerScore);

        if (playerScore > 21 || computerScore > 21 || (!additionalCards && computerScore > playerScore)) {
            break;
        }
    }


    if (playerScore == computerScore || (playerScore > 21 && computerScore > 21)) {
        printf("Draw!\n"); //?????

    }
    else if ((playerScore <= 21 && playerScore > computerScore) || computerScore > 21) {
        printf("\n\n\nYou have won! you have - %d HSE - %d\n\n\n", playerScore, computerScore);
    }
    else {
        printf("\n\n\nThe HSE won! you have - %d HSE - %d\n\n\n", playerScore, computerScore);
    }


    printf("\nThank you for participating in the game!\n");
    free(coloda[0]);
    free(coloda[1]);
    free(coloda[2]);
    free(coloda[3]);
    free(coloda[4]);


}




int main(void)
{
    if (start_game() == 3) return 0;
    game();
    for (;;) {
        int n = 0;
        printf("\nDo you want to restart?\n");
        printf("1 - restart the game\n");
        printf("2 - back to main menu\n");
        printf("3 - exit\n");
        printf("Select the key: ");
        scanf_s("%d", &n);
        printf("\n");
        switch (n)
        {
        case 1:
            game();
            break;
        case 2:
            system("cls");
            if (start_game() == 3) return 0;
            else game();
            break;
        case 3:
            return 0;
        }
    }
}
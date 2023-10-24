#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int playerScore = 0, computerScore = 0;
    int card, choice, additionalCards;
    char playAgain;

    srand(time(NULL)); // крч это генератор случайных чисел

    
        playerScore = 0;
        computerScore = 0;
        additionalCards = 1;


        printf("Welcome to Game 21!\n\n");

        while (additionalCards) { //вся игра для игрока
            printf("Your move. Get a card? [1 - Yes / 0 - No]: ");
            scanf_s("%d", &choice);

            if (choice == 1) {
                card = rand() % 9 + 2;

                if (card == 8) {
                    card = 2; //это идет в сумму для вальта
                }
                else if (card == 9) {
                    card = 3; //для дамы
                }
                else if (card == 10) {
                    card = 4; //король
                }
                else if (card == 11) {
                    card = 11; //туз
                }

                printf("Your card: %d\n", card);
                playerScore += card;
            }
            else {
                additionalCards = 0;
            }

            if (playerScore <= 21 && additionalCards) { //вся игра для компика
                card = rand() % 9 + 2;

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

                printf("The computer's progress. Card: %d\n", card);
                computerScore += card;
            }

            printf("The number of points at the moment: Your - %d, Computer - %d\n\n", playerScore, computerScore);

            if (playerScore > 21 || computerScore > 21 || (!additionalCards && computerScore > playerScore)) {
                break;
            }
        }

        
        if (playerScore == computerScore || (playerScore > 21 && computerScore > 21)) {
            printf("Draw!\n"); //ничья
        }
        else if ((playerScore <= 21 && playerScore > computerScore) || computerScore > 21) {
            printf("You have won!\n");
        }
        else {
            printf("The computer won!\n");
        }


        printf("\nThank you for participating in the game! ");
        

    return 0;
}
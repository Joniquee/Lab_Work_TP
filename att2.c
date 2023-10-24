#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int playerScore = 0, computerScore = 0;
    int card, choice, additionalCards;
    char playAgain;

    srand(time(NULL)); 

    
        playerScore = 0;
        computerScore = 0;
        additionalCards = 1;


        printf("Welcome to Game 21!\n\n");

        while (additionalCards) { 
            printf("Your move. Get a card? [1 - Yes / 0 - No]: ");
            scanf_s("%d", &choice);

            if (choice == 1) {
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

                printf("Your card: %d\n", card);
                playerScore += card;
            }
            else {
                additionalCards = 0;
            }

            if (playerScore <= 21 && additionalCards) { 
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
            printf("Draw!\n"); 
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

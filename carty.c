#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void matlec(char*** card)  
{   
    char **piki5 = (char**)malloc(10 * sizeof(char*)); 
    for (int i = 0; i < 10; i++) { 
        piki5[i] = (char*)malloc(16 * sizeof(char)); 
    } 
      
    sprintf(piki5[0], "###############"); 
    sprintf(piki5[1], "#      |      #"); 
    sprintf(piki5[2], "#  @   |   @  #");  
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
    char **piki6 = (char**)malloc(10 * sizeof(char*)); 
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
void linlec(char *** card)
{
    char **piki7 = (char**)malloc(10 * sizeof(char*)); 
    for (int i = 0; i < 10; i++) { 
        piki7[i] = (char*)malloc(16 * sizeof(char)); 
    } 
    sprintf(piki7[0], "###############");
    sprintf(piki7[1], "#      |      #");
    sprintf(piki7[2], "#  @   |      #");
    sprintf(piki7[3], "#  @       @  #");
    sprintf(piki7[4], "#  @          #");
    sprintf(piki7[5], "#  @       @  #");
    sprintf(piki7[6], "#  @       @  #");
    sprintf(piki7[7], "#  @@@@@   @  #");
    sprintf(piki7[8], "#             #");
    sprintf(piki7[9], "###############");

    
    *card = piki7; 
}
void linsem(char *** card)
{
    char **piki8 = (char**)malloc(10 * sizeof(char*)); 
    for (int i = 0; i < 10; i++) { 
        piki8[i] = (char*)malloc(16 * sizeof(char)); 
    } 
    sprintf(piki8[0], "###############");
    sprintf(piki8[1], "#             #");
    sprintf(piki8[2], "#  @          #");
    sprintf(piki8[3], "#  @       @  #");
    sprintf(piki8[4], "#  @          #");
    sprintf(piki8[5], "#  @       @  #");
    sprintf(piki8[6], "#  @       @  #");
    sprintf(piki8[7], "#  @@@@@   @  #");
    sprintf(piki8[8], "#             #");
    sprintf(piki8[9], "###############");

    
    *card = piki8; 
}
void tplec(char *** card)
{
    char **piki9 = (char**)malloc(10 * sizeof(char*)); 
    for (int i = 0; i < 10; i++) { 
        piki9[i] = (char*)malloc(16 * sizeof(char)); 
    } 
    sprintf(piki9[0], "###############");
    sprintf(piki9[1], "#      |      #");
    sprintf(piki9[2], "#      |      #");
    sprintf(piki9[3], "#  @@@@@      #");
    sprintf(piki9[4], "#    @        #");
    sprintf(piki9[5], "#    @  @@@   #");
    sprintf(piki9[6], "#    @  @  @  #");
    sprintf(piki9[7], "#       @@@   #");
    sprintf(piki9[8], "#       @     #");
    sprintf(piki9[9], "###############");

    
    *card = piki9; 
}
void tpsem(char *** card)
{
    char **piki1 = (char**)malloc(10 * sizeof(char*)); 
    for (int i = 0; i < 10; i++) { 
        piki1[i] = (char*)malloc(16 * sizeof(char)); 
    } 
    sprintf(piki1[0], "###############");
    sprintf(piki1[1], "#             #");
    sprintf(piki1[2], "#             #");
    sprintf(piki1[3], "#  @@@@@      #");
    sprintf(piki1[4], "#    @        #");
    sprintf(piki1[5], "#    @  @@@   #");
    sprintf(piki1[6], "#    @  @  @  #");
    sprintf(piki1[7], "#       @@@   #");
    sprintf(piki1[8], "#       @     #");
    sprintf(piki1[9], "###############");

    
    *card = piki1; 
}
void enlec(char *** card)
{
    char **piki2 = (char**)malloc(10 * sizeof(char*)); 
    for (int i = 0; i < 10; i++) { 
        piki2[i] = (char*)malloc(16 * sizeof(char)); 
    } 
    sprintf(piki2[0], "###############");
    sprintf(piki2[1], "#      |      #");
    sprintf(piki2[2], "#      |      #");
    sprintf(piki2[3], "#  @@@@       #");
    sprintf(piki2[4], "#  @          #");
    sprintf(piki2[5], "#  @@@   @@   #");
    sprintf(piki2[6], "#  @     @ @  #");
    sprintf(piki2[7], "#  @@@@  @ @  #");
    sprintf(piki2[8], "#             #");
    sprintf(piki2[9], "###############");

    
    *card = piki2; 
}
void ensem(char *** card)
{
    char **piki3 = (char**)malloc(10 * sizeof(char*)); 
    for (int i = 0; i < 10; i++) { 
        piki3[i] = (char*)malloc(16 * sizeof(char)); 
    } 
    sprintf(piki3[0], "###############");
    sprintf(piki3[1], "#             #");
    sprintf(piki3[2], "#             #");
    sprintf(piki3[3], "#  @@@@       #");
    sprintf(piki3[4], "#  @          #");
    sprintf(piki3[5], "#  @@@   @@   #");
    sprintf(piki3[6], "#  @     @ @  #");
    sprintf(piki3[7], "#  @@@@  @ @  #");
    sprintf(piki3[8], "#             #");
    sprintf(piki3[9], "###############");

    
    *card = piki3; 
}
void dislec(char *** card)
{
    char **piki4 = (char**)malloc(10 * sizeof(char*)); 
    for (int i = 0; i < 10; i++) { 
        piki4[i] = (char*)malloc(16 * sizeof(char)); 
    } 
    sprintf(piki4[0], "###############");
    sprintf(piki4[1], "#      |      #");
    sprintf(piki4[2], "#      |      #");
    sprintf(piki4[3], "#   @@@@      #");
    sprintf(piki4[4], "#   @   @     #");
    sprintf(piki4[5], "#   @    @    #");
    sprintf(piki4[6], "#   @   @     #");
    sprintf(piki4[7], "#   @@@@      #");
    sprintf(piki4[8], "#             #");
    sprintf(piki4[9], "###############");

    
    *card = piki4; 
}


 

int main() {
    int playerScore = 0, computerScore = 0;
    int card, choice, additionalCards;
    char playAgain;
    char **coloda[5] = {0};
    int h = 0;

    srand(time(NULL)); // ��� ��� ��������� ��������� �����

    
        playerScore = 0;
        computerScore = 0;
        additionalCards = 1;
        


        printf("Welcome to Game 21!\n\n");

        while (h<3)
        { 
            printf("Your move. Get a card? [1 - Yes / 0 - No]: ");


            scanf_s("%d", &choice);

            if (choice == 1) {
                card = rand() % 9;
                
                if (card == 6) {
                    card = 2;
                    dislec(&coloda[h]); 
                }
                else if (card == 7) {
                    card = 3; 
                    ensem(&coloda[h]);
                }
                else if (card == 8) {
                    card = 4; 
                    enlec(&coloda[h]);
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
        }
        free(coloda[0]);
        free(coloda[1]);
        free(coloda[2]);
        free(coloda[3]);
        free(coloda[4]);
        free(coloda[5]);
}
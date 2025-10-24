#include <stdio.h>

/*
Three friends played the lottery. If they win, the prize must be divided proportionally 
to the amount each one contributed to the bet. Write a program that reads how much each player bet, 
the total prize amount, and prints how much each one would receive based on their contribution.
*/

int main() {
    float player1, player2, player3, prize;
    printf("Player 1 bet amount: \n");
    scanf("%f", &player1);

    printf("Player 2 bet amount: \n");
    scanf("%f", &player2);

    printf("Player 3 bet amount: \n");
    scanf("%f", &player3);

    printf("Prize amount: \n");
    scanf("%f", &prize);

    float total;

    total = player1 + player2 + player3;

    float share1, share2, share3;
    share1 = (player1/total) * prize;
    share2 = (player2/total) * prize;
    share3 = (player3/total) * prize;

    printf("Total bet amount: %f\n", total);
    printf("Player 1 wins: %2.f\n", share1);
    printf("Player 2 wins: %2.f\n", share2);
    printf("Player 3 wins: %2.f\n", share3);

return 0;
}
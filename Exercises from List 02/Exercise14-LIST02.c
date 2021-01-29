#include <stdio.h>
#include <stdlib.h>

int main(){
    int player1=0;
    int player2=0;
    int point=01;

    do{
        printf("Who did a point? player 1 (type 1) or player 2 (type 2)\n");
        scanf("%d", &point);
        if(point==1){
            player1++;
        } else if(point==2){
            player2++;
        } else {
            printf("Invalid number\n");
        }
    } while ((player1<5 && player2<5) || (abs(player1-player2)<2));

    printf("Result:\nPlayer 1: %d\tPlayer 2: %d\n", player1, player2);
    if(player1>player2){
        printf("Player 1 wins\n");
    } else {
        printf("Player 2 wins\n");
    }
    return 0;
}
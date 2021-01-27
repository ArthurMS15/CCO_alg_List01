#include <stdio.h>

int main (){
    int a_ngols, b_ngols;
    printf("Enter the number of goals of team A\n");
    scanf("%d", &a_ngols);
    printf("Enter the number of goals of team B\n");
    scanf("%d", &b_ngols);
    if (a_ngols > b_ngols) printf("Team A won\n");
    else printf("Team B won\n");
    if (a_ngols == b_ngols) printf("Draw");
    return 0;
}
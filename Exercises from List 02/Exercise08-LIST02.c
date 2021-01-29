#include <stdio.h>

int main (){
    int c1, c2, c3, c4, nullvote, whitevote, cont, totalvotes, vote;
    cont = 0;
    totalvotes = 10;
    c1 = 0;
    c2 = 0;
    c3 = 0;
    c4 = 0;
    nullvote = 0;
    whitevote = 0;
    while (cont < totalvotes){
        printf("Vote for which candidate you want to vote:\n");
        printf("Type 1 for candidate 1\n");
        printf("Type 2 for candidate 2\n");
        printf("Type 3 for candidate 3\n");
        printf("Type 4 for candidate 4\n");
        printf("Type 5 for a null vote\n");
        printf("Type 6 for a white vote\n");
        scanf("%d", &vote);
        switch(vote){
            case 1:
                c1++;
                cont++;
                printf("You voted for candidate 1\n");
                break;
            case 2:
                c2++;
                cont++;
                printf("You voted for candidate 2\n");
                break;
            case 3:
                c3++;
                cont++;
                printf("You voted for candidate 3\n");
                break;
            case 4:
                c4++;
                cont++;
                printf("You voted for candidate 4\n");
                break;
            case 5:
                nullvote++;
                cont++;
                printf("You voted null\n");
                break;
            case 6:
                whitevote++;
                cont++;
                printf("You voted white\n");
                break;
            case 0:
                cont=totalvotes+1;
                break;
        }
    }
    printf("Quantity of votes for candidate 1: %d\n", c1);
    printf("Quantity of votes for candidate 2: %d\n", c2);
    printf("Quantity of votes for candidate 3: %d\n", c3);
    printf("Quantity of votes for candidate 4: %d\n", c4);
    printf("Quantity of null votes: %d\n", nullvote);
    printf("Quantity of white votes: %d\n", whitevote);
}
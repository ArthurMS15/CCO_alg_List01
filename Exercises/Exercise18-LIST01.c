#include <stdio.h>

int main(){
    int current_year, birth_year, vote;
    printf("Enter the current year:\n");
    scanf("%d", &current_year);
    printf("Enter the birth year:\n");
    scanf("%d", &birth_year);
    vote = current_year-birth_year;
    if (vote >= 16){
        printf("You can vote");
    } else {
        printf("You can't vote");
    }

}
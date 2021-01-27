#include <stdio.h>

int main(){
    float note1, note2, avg;

    printf("Enter the first note:\n");
    scanf("%f", &note1);
    printf("Enter the second note:\n");
    scanf("%f", &note2);

    avg = (note1+note2)/2;
    if (avg>=7){
       printf("Approved student!, note: %.2f\n", avg);
    } else {
        printf("Reproved student!, note: %.2f\n", avg);
    }
    
    return 0;
}
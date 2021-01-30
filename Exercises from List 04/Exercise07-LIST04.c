#include <stdio.h>
#define NOTE 3

int main(){
    float note[NOTE], max=0, min=0;
    char array[NOTE][100];

    for(int i=0;i<NOTE;i++){
        printf("Input the note of the student %d:\n", i+1);
        scanf("%f", &note[i]);
        printf("Input the name of the student %d:\n", i+1);
        scanf("%s", &array[i]);
    }
    for(int i=0;i<NOTE;i++){
        if(note[i]>max){
            max=note[i];
        }
    }
    for(int i=0;i<NOTE;i++){
        if(max==note[i]){
            printf("Student: %s\t got the highest note: %.2f\n", array[i], note[i]);
        }
    }
    min=max+1;
    for(int i=0;i<NOTE;i++){
        if(note[i]<min){
            min=note[i];
        }
    }
    for(int i=0;i<NOTE;i++){
        if(min==note[i]){
            printf("Student: %s\t got the lowest note: %.2f\n", array[i], note[i]);
        }
    }
    return 0;
}
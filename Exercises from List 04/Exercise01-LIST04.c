#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(){
    int vect[SIZE], count=0;
    
    for(int i=0;i<SIZE;i++){
        vect[i]=rand()%30;
        //scanf("%d", &vect[i]); 
        //Writing or generating randomly
    }
    printf("Vector:");
    for(int i=0;i<10;i++){
        printf("\t%d", vect[i]);
    }
    printf("\nVector with only values higher than 20:");
    for(int i=0;i<10;i++){
        if(vect[i]>20){
            printf("\t%d", vect[i]);
        } else {
            count++;
        }
    }
    if(count==SIZE){
        printf("There is no value higher than 20\n");
    }

    return 0;
}
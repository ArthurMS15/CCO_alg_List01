#include <stdio.h>
#include <stdlib.h>

int main(){
    int vect[10];
    
    for(int i=0;i<10;i++){
        vect[i]=rand()%30;
    }
    printf("Vector:");
    for(int i=0;i<10;i++){
        printf("\t%d", vect[i]);
    }
    printf("\nVector with only values higher than 20:");
    for(int i=0;i<10;i++){
        if(vect[i]>20){
            printf("\t%d", vect[i]);
        }
    }

    return 0;
}
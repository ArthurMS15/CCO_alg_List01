#include <stdio.h>
#define SIZE 20

int main(){
    int vect[SIZE];
    for(int i=0;i<SIZE;i++){
        //vect[i]=rand()%SIZE;
        scanf("%d", &vect[i]); //Writing or generating randomly
    }
    for(int i=0;i<SIZE;i++){
        printf("%d\t", vect[i]);
    }
    printf("\nVector with values equals to 10:");
    for(int i=0;i<SIZE;i++){
        if(vect[i]==10){
            printf("%d\t", vect[i]);
        }
    }
    return 0;
}
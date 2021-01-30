#include <stdio.h>
#define SIZE 10

int main(){
    int vect1[SIZE], vect2[SIZE], vect3[SIZE*2];
    for(int i=0;i<SIZE;i++){
        vect1[i]=rand()%30;
        vect2[i]=rand()%30;
    }
    printf("Vector 1:\t");
    for(int i=0;i<SIZE;i++){
        printf("%d\t", vect1[i]);
    }
    printf("\nVector 2:\t");
    for(int i=0;i<SIZE;i++){
        printf("%d\t", vect2[i]);
    }
    printf("\nVector 3:\t");
    for(int i=0;i<SIZE;i++){
        if(i%2==0){
            vect3[i]=vect1[i];
        } else {
            vect3[i]=vect2[i];
        }
    }
    for(int i=10;i<SIZE+10;i++){
        if(i%2==0){
            vect3[i]=vect1[i-10];
        } else {
            vect3[i]=vect2[i-10];
        }
    }
    for(int i=0;i<SIZE*2;i++){
        printf("%d\t", vect3[i]);
    }
}
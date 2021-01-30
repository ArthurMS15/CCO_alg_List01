#include <stdio.h>
#define SIZE 10

int main(){
    int vect1[SIZE], vect2[SIZE], vect3[SIZE*2];
    int count=1;
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
    for(int i=0;i<SIZE*2;i++){
        if(i==0){
            vect3[i]=vect1[i];
            vect3[i+1]=vect2[i];
        } else {
            vect3[i]=vect1[i-(1*count)];
            vect3[i+1]=vect2[i-(1*count)];
            count++;
        }
        i++;
    }
    for(int i=0;i<SIZE*2;i++){
        printf("%d\t", vect3[i]);
    }
    return 0;
}
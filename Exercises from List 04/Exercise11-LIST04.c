#include <stdio.h>
#include <math.h>
#define SIZE 5

int main(){
    int array[SIZE][SIZE], array3[SIZE][SIZE];

    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            array[i][j]=rand()%10;
            array3[i][j]=pow(array[i][j],3);
        }
    }
    printf("Array:\n");
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
    printf("Diced array:\n");
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            printf("%d\t", array3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
#define SIZE 5

int main(){
    int array[SIZE][SIZE], count=0;
    float avgeven=0;

    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            array[i][j]=rand()%30;
        }
    }
    printf("Array:\n");
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }


    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            if(array[i][j]%2==0){
                avgeven=avgeven+array[i][j];
                count++;
            }
        }
    }

    avgeven=avgeven/(float)count;
    printf("Average (considering just the quantity of even numbers):\t%.2f\n", avgeven);
    return 0;
}
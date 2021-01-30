#include <stdio.h>
#define SIZE 5

int main(){
    int array[SIZE][SIZE], sumline4=0, sumcolumn2=0, sumdiagprinc=0, sumdiagsec=0, sumall=0;

    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            array[i][j]=rand()%30;
            if(i==3){
                sumline4=sumline4+array[i][j];
            }
            if(j==1){
                sumcolumn2=sumcolumn2+array[i][j];
            }
            if(i==j){
                sumdiagprinc=sumdiagprinc+array[i][j];
            }
            sumall=sumall+array[i][j];
        }
    }
    int i=0;
    int j=SIZE-1;
    while(i<SIZE){
        sumdiagsec=sumdiagsec+array[i][j];
        i++;
        j--;
    }

    printf("Array:\n");
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    printf("Sum of all numbers in line 4: %d\n", sumline4);
    printf("Sum of all numbers in column 2: %d\n", sumcolumn2);
    printf("Sum of all numbers in principal diagonal: %d\n", sumdiagprinc);
    printf("Sum of all numbers in secondary diagonal: %d\n", sumdiagsec);
    printf("Sum of all numbers in the array: %d\n", sumall);
    return 0;
}
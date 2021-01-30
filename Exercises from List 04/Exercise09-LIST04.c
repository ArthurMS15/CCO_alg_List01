#include <stdio.h>
#define LINES 7
#define COLUMNS 4

int main(){
    int array[LINES][COLUMNS], min=0, max=0, line, column;
    for(int i=0;i<LINES;i++){
        for(int j=0;j<COLUMNS;j++){
            array[i][j]=rand()%30;
        }
    }

    printf("Array:\n");
    for(int i=0;i<LINES;i++){
        for(int j=0;j<COLUMNS;j++){
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<LINES;i++){
        for(int j=0;j<COLUMNS;j++){
            if(array[i][j]>max){
                max=array[i][j];
            }
        }
    }
    min=max+1;
    for(int i=0;i<LINES;i++){
        for(int j=0;j<COLUMNS;j++){
            if(array[i][j]<min){
                min=array[i][j];
                line=i;
                column=j;
            }
        }
    }
    printf("The lowest value of the array is: %d\t Position: %d, %d\n", min, line, column);
    return 0;
}
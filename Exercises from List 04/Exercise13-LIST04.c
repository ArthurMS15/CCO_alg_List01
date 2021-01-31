#include <stdio.h>
#define LINE 7
#define COLUMN 8

int main(){
    int array[LINE][COLUMN];

    for(int i=0;i<LINE;i++){
        for(int j=0;j<COLUMN;j++){
            array[i][j]=i+j;
        }
    }
    printf("Array:\n");
    for(int i=0;i<LINE;i++){
        for(int j=0;j<COLUMN;j++){
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
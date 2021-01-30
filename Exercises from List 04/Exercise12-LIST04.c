#include <stdio.h>
#define LINE 3
#define COLUMN 4

int main(){
    float array[LINE][COLUMN], upperleftcorner=0, lowerleftcorner=0;

    for(int i=0;i<LINE;i++){
        for(int j=0;j<COLUMN;j++){
            array[i][j]=rand()%10;
            if(i==0 && j==0){
                upperleftcorner=array[i][j];
            }
            if(i==2 && j==0){
                lowerleftcorner=array[i][j];
            }
        }
    }
    printf("Array:\n");
    for(int i=0;i<LINE;i++){
        for(int j=0;j<COLUMN;j++){
            printf("%.2f\t", array[i][j]);
        }
        printf("\n");
    }
    printf("Value of upper left corner: %.2f\n", upperleftcorner);
    printf("Value of lower left corner: %.2f\n", lowerleftcorner);
}
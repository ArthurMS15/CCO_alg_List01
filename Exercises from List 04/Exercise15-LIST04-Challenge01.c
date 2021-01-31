#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 7

int main (){
    int l, c;
    char vect[SIZE] = "ABCDEFG";
    int array[SIZE][SIZE] = {{0,0,0,0,0,0,0},
                            {2,0,0,0,0,0,0},
                            {11,7,0,0,0,0,0},
                            {6,12,11,0,0,0,0},
                            {15,4,8,10,0,0,0},
                            {11,2,3,2,5,0,0},
                            {1,15,13,1,13,14,0}};
                            
    printf("0\tA\tB\tC\tD\tE\tF\tG\n");
    for(l=0;l<SIZE;l++){
        printf("%c\t", vect[l]);
        for(c=0;c<SIZE;c++){
            printf("%d\t", array[l][c]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 7

int main (){
    char origin, destiny;
    int l, c;
    char vect[SIZE] = "ABCDEFG";
    int array[SIZE][SIZE] = {{0,2,11,6,15,11,1},
                            {2,0,7,12,4,2,15},
                            {11,7,0,11,8,3,13},
                            {6,12,11,0,10,2,1},
                            {15,4,8,10,0,5,13},
                            {11,2,3,2,5,0,14},
                            {1,15,13,1,13,14,0}};
    printf("0\tA\tB\tC\tD\tE\tF\tG\n");
    for(l=0;l<SIZE;l++){
        printf("%c\t", vect[l]);
        for(c=0;c<SIZE;c++){
            printf("%d\t", array[l][c]);
        }
        printf("\n");
    }
    l=0;
    c=0;
    printf("Type the city(origin):\n");
    scanf("%s", &origin);
    if(origin==vect[0]){
        l=0;}
    if(origin==vect[1]){
        l=1;}
    if(origin==vect[2]){
        l=2;}
    if(origin==vect[3]){
        l=3;}
    if(origin==vect[4]){
        l=4;}
    if(origin==vect[5]){
        l=5;}
    if(origin==vect[6]){
        l=6;}
    printf("Type the citdestiny(destiny):\n");
    scanf("%s", &destiny);
    if(destiny==vect[0]){
        c=0;}
    if(destiny==vect[1]){
        c=1;}
    if(destiny==vect[2]){
        c=2;}
    if(destiny==vect[3]){
        c=3;}
    if(destiny==vect[4]){
        c=4;}
    if(destiny==vect[5]){
        c=5;}
    if(destiny==vect[6]){
        c=6;}
    printf("The distance between the cities is: %d\n", array[l][c]);

    return 0;
}
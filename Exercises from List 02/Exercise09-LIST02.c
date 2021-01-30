#include <stdio.h>

int main(){
    int avgnsons, yourssons, yourssons2, count, count2, count3;
    float avgwagepop, highwage, avg100, yourwage, yourwage2, yourwage100;
    highwage = 0;
    yourssons = 0;
    yourssons2 = 0;
    yourwage = 0;
    yourwage100 = 0;
    count = 0;
    count2 = 0;

    do{
        printf("Insert your wage:\n");
        scanf("%f", &yourwage);
        avgwagepop = yourwage + yourwage2;
        yourwage2 = avgwagepop;
        if(yourwage >= 0){
        	printf("Insert how many children do you have:\n");
        	scanf("%d", &yourssons);
        	avgnsons = yourssons + yourssons2;
        	yourssons2 = avgnsons;
        	count ++;	
		}
        if (yourssons < 0){
            printf("There cant' be a negative number\n");
        }
        if (yourwage <= 100){
            count2 ++;
        }
		if (yourwage > highwage){
            highwage = yourwage;
        }
    } while (yourwage >= 0);
    if(yourwage < 0){
        avgnsons = avgnsons/count;
        avgwagepop = avgwagepop/count;
        count3 = count + count2;
        avg100 = count2*100/count3;
        printf("Average population wage is: %.2f\n", avgwagepop);
        printf("Average number of children is: %d\n", avgnsons);
        printf("The highest wage of all is: %.2f\n", highwage);
        printf("Pecentage of people with a wage lowest or equal to 100 in relation with total wages is:: %.2f\n", avg100);
    }
    
    return 0;
}
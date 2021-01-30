#include <stdio.h>

int main(){
    int age, sex, exp, count=0, countm=0, countf=0, women35=0, minfexp=1000;
    float avgmenage=0, percentage45=0;

    while(count<1){
        printf("How old are you?\n");
        scanf("%d", &age);
        if(age<=0){
            count++;
        } else {
            printf("What is your gender? (M=1 or F=2)\n");
            scanf("%d", &sex);
            if(sex==1){
                countm++;
                if(age>45){
                    percentage45++;
                }
            } else if (sex==2){
                countf++;
            }
            printf("Do you have experience? (Y=1 or N=2)\n");
            scanf("%d", &exp);
            if(exp==1 && sex==1){
                avgmenage=avgmenage+age;
            }
            if(exp==1 && sex==2 && age<35){
                women35++;
            }
            if(age<minfexp && exp==1){
                minfexp=age;
            }
        }
    }
    avgmenage=avgmenage/(float)countm;
    percentage45=(percentage45/(float)countm)*100;
    printf("Number of feminine candidates: %d\n", countf);
    printf("Number of masculine candidates: %d\n", countm);
    printf("Average age of men with experience: %.2f\n", avgmenage);
    printf("Percentage of men older than 45 years old among all men: %.2f\n", percentage45);
    printf("Number of women younger than 35 years old with experience: %d\n", women35);
    printf("Minimum age among all women with experience: %d\n", minfexp);
    
    return 0;
}
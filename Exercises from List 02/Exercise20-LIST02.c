#include <stdio.h>

int main(){
    float weight, avgweight, avgage, avgwtotal, avgatotal;
    int age, count=0, count2=0;
    
    for(int team=0;team<5;team++){
        for(int players=0;players<5;players++){
            printf("Team %d\tPlayer %d\nInput the weight of the player:\n", team+1, players+1);
            scanf("%f", &weight);
            printf("Input how many years old is the player:\n");
            scanf("%d", &age);
            count++;
            avgweight=avgweight+weight;
            avgage=avgage+age;
        }
        count2++;
        avgweight=avgweight/(float)count;
        avgwtotal=avgwtotal+avgweight;
        printf("Average weight of Team %d: %.2f\n", team+1, avgweight);
        avgage=avgage/(float)count;
        avgatotal=avgatotal+avgage;
        printf("Average age of Team %d: %.2f\n", team+1, avgage);
    }
    avgwtotal=avgwtotal/count2;
    avgatotal=avgatotal/count2;
    printf("Average weight in total:\n", avgwtotal);
    printf("Average age in total:\n", avgatotal);

    return 0;
}
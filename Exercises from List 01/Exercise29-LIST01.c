#include <stdio.h>

int main (){
    float tempavg1, tempavg2, tempavg3, tempavg4, tempavg5;
    int ncountyinf;
    char county1 [100], county2 [100], county3 [100], county4 [100], county5 [100];
    ncountyinf = 0;

    printf("Write the first county:\n");
    gets(county1);
    printf("Write the second county:\n");
    gets(county2);
    printf("Write the third county:\n");
    gets(county3);
    printf("Write the fourth county:\n");
    gets(county4);
    printf("Write the fifth county:\n");
    gets(county5);
    printf("Write the average temperature of the first county\n");
    scanf("%f", &tempavg1);
    printf("Write the average temperature of the second county\n");
    scanf("%f", &tempavg2);
    printf("Write the average temperature of the third county\n");
    scanf("%f", &tempavg3);
    printf("Write the average temperature of the fourth county\n");
    scanf("%f", &tempavg4);
    printf("Write the average temperature of the fifth county\n");
    scanf("%f", &tempavg5);
    printf("%s : %.2f ,%s : %.2f , %s : %.2f , %s : %.2f e %s : %.2f\n", county1, tempavg1, county2, tempavg2, county3, tempavg3, county4, tempavg4, county5, tempavg5);
    if (tempavg1 <= 10){   
        ncountyinf = ncountyinf + 1;
    }
    if (tempavg2 <= 10){   
        ncountyinf = ncountyinf + 1;
    }
    if (tempavg3 <= 10){   
        ncountyinf = ncountyinf + 1;
    }
    if (tempavg4 <= 10){   
        ncountyinf = ncountyinf + 1;
    }
    if (tempavg5 <= 10){   
        ncountyinf = ncountyinf + 1;
    }
    printf("Quantity with less than 10 degrees: %.d\n", ncountyinf);
    if (tempavg1 >= 30){   
        printf("County: %s, has a temperature above 30 degrees\n", county1);
    }
    if (tempavg2 >= 30){   
        printf("County: %s, has a temperature above 30 degrees\n", county2);
    }
    if (tempavg3 >= 30){   
        printf("County: %s, has a temperature above 30 degrees\n", county3);
    }
    if (tempavg4 >= 30){   
        printf("County: %s, has a temperature above 30 degrees\n", county4);
    }
    if (tempavg5 >= 30){   
        printf("County: %s, has a temperature above 30 degrees\n", county5);
    }

    return 0;
}
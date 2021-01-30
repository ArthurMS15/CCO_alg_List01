#include <stdio.h>

int main(){
    float note1, note2, avgst, avgtotal;
    int totalap=0, totaldp=0, count=0;

    for(int i=0;i<6;i++){
        printf("Insert the first note of the student:\n");
        scanf("%f", &note1);
        printf("Insert the second note of the student:\n");
        scanf("%f", &note2);
        avgst=(note1+note2)/(float)2;
        printf("Average\t\tMessage\n0 to 5\t\tDisapproved\n5.1 to 6.9\tRecuperation\n7.0 to 10\tApproved\n");
        printf("Average of the student: %.2f\n", avgst);
        if(avgst<=5){
            totaldp++;
        } 
        if (avgst>7){
            totalap++;
        }
        avgtotal=avgst+avgtotal;
        count++;
    }
    avgtotal=avgtotal/count;
    printf("Number of all approved students: %d\n", totalap);
    printf("Number of all disapproved students: %d\n", totaldp);
    printf("Total average (of all students): %.2f\n", avgtotal);

    return 0;
}
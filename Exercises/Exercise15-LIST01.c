#include <stdio.h>

int main(){
    char pilot_name [100];
    float distance, time, avg_velocity;
    printf("Enter the pilot name:\n");
    gets(pilot_name);
    printf("Enter the distance in kilometers:\n");
    scanf("%f", &distance);
    printf("Enter the time value in hours:\n");
    scanf("%f", &time);
    avg_velocity = distance/time;
    printf("The average velocity of the pilot: %s, was: %.2f km/h\n", pilot_name, avg_velocity);
    return 0;
}
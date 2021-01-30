#include <stdio.h>

int main(){
    float popa=90000000;
    float popb=140000000;
    int count;

    while(popa<=popb){
        popa=(popa+(popa*0.035));
        popb=(popb+(popb*0.01));
        count++;
    }
    printf("The population of country A will surpass population of country B in: %d years\n", count);
    
    return 0;
}

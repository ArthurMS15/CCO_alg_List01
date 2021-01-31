#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 361
#define PI 3.1415

typedef struct{
    float ang;
    float radianos[N];
    float vetaux[N];
} sSeno;

float escolhaang(sSeno dados);
void carregareescrevervetseneencontrareescreverangscomsenomaior05(sSeno dados, float angescolhido, float *vetsen);

int main (){
    sSeno dados;
    float angescolhido;
    angescolhido=escolhaang(dados);
    float *vetsen;
    vetsen=(float*) malloc(N * sizeof(float));
    if (angescolhido>=0){ 
        carregareescrevervetseneencontrareescreverangscomsenomaior05(dados, angescolhido, vetsen);
    }
    if (angescolhido<0){
        return 0;
    } 
    free(vetsen);
    return 0;
}

float escolhaang(sSeno dados){
    printf("Escreva o angulo (negativo para finalizar o programa):\n");
    scanf("%f", &dados.ang);
    return dados.ang;
}

void carregareescrevervetseneencontrareescreverangscomsenomaior05(sSeno dados, float angescolhido, float *vetsen){
    for(int x=0;x<N;x++){
        dados.radianos[x]=(x*PI)/180;
    }
    float y=0;
    float fat=3;
    float powaux=3;
    float auxiliar[N];
    while (y < 15){
    	for(int x=fat-1;x>1;x--){
    	    fat = fat*x;
		}
        for(int x=0; x<N; x++){
            auxiliar[x]= (pow(dados.radianos[x], powaux))/fat;
        }
        for(int x=0; x<N; x++){
            vetsen[x] = dados.radianos[x]-auxiliar[x];
        }
        y = y + 1;
        powaux=powaux+2;
        fat=fat+2;
	}
    printf("Seno de todos os angulos:\n");
    for(int x=0; x<N; x++){
        if(x<181){
            if(x==180){
            vetsen[x]=0;
            }
            printf("ang:%i - seno:%f\n", x, vetsen[x]);
        }
        if(x>=181 && x<=360){
            dados.vetaux[x]=(vetsen[x]*-1)+PI;
            if(x==360){
            dados.vetaux[x]=0;
            }
            printf("ang:%i - seno:%f\n", x, dados.vetaux[x]);
        }
    }
    printf("Os valores onde o seno foi maior que 0,5 (entre 0 e o angulo escolhido pelo usuario) foram:\n");
    for(int x=0;x<N;x++){
        if(vetsen[x]>0.5 && x<=angescolhido && x<180){  
            printf("Angulo entre 0 e o digitado com seno maior que 0,5: %i\n", x);
        }
    }
    printf("Nenhum valor depois de 180 graus pode ser maior que 0,5 pois serao todos negativos(inverso)\n");
}
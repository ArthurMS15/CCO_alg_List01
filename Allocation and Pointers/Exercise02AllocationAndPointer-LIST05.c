#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define VEICULOS 1

typedef struct{
    char proprietario[100];
    int combustivel;
    char modelo[50];
    char cor[100];
    int nchassi;
    int ano;
    char placa[7];
}sVeiculos;

sVeiculos* criarVetorCarros(int veiculos){
    sVeiculos *c;
    c=(sVeiculos*) malloc(veiculos * sizeof(sVeiculos));
    return c;
}

int escolhaUsuario(){
    int var=0;
    printf("NAO USE ESPACAMENTO\n");
    printf("\nDigite o determinado numero para fazer uma das acoes:\n");
    printf("\n");
    printf("1 - registrar TODOS os carros da cidade\n");
    printf("2 - mostrar todos os carros registrados\n");
    printf("3 - consultar por ano(1980 em diante) e carros movidos a diesel\n");
    printf("4 - consultar carros que comecem com a letra A na placa e que terminam em 0, 2, 4 ou 7\n");
    printf("5 - consultar segunda letra vogal e com a soma dos valores da placa sendo par\n");
    printf("6 - trocar proprietario com fornecimento do numero de chassi(placas sem digito 0)\n");
    printf("7 - para finalizar o programa\n");
    printf("\n");
    scanf("%d", &var);
    return var;
}

void escolhaVeiculo(sVeiculos *c){
    for(int x=0;x<VEICULOS;x++){ 
        printf("Nome do proprietario:\n");
        scanf("%s", &c[x].proprietario);
        printf("Combustivel? (1-alcool/ 2-diesel/ 3-gasolina):\n");
        scanf("%i", &c[x].combustivel);
        printf("Nome do modelo:\n");
        scanf("%s", &c[x].modelo);
        printf("Cor:\n");
        scanf("%s", &c[x].cor);
        printf("Numero do chassi:\n");
        scanf("%i", &c[x].nchassi);
        printf("Ano do carro:\n");
        scanf("%i", &c[x].ano);
        printf("Placa do carro:\n");
        scanf("%s", &c[x].placa);
    }
}

void consultaVeiculo1980Diesel(sVeiculos *c){
    for(int x=0;x<VEICULOS;x++){
        if(c[x].ano>=1980 && c[x].combustivel==2){
            printf("Nome do proprietario: %s\n", c[x].proprietario);
            printf("Combustivel? (1-alcool/ 2-diesel/ 3-gasolina): %i\n", c[x].combustivel);
            printf("Ano do carro: %i\n", c[x].ano);
        }
    }
}

void consultaAfinal0247(sVeiculos *c){
    for(int x = 0; x < VEICULOS; x++){ 
	    if(c[x].placa[0] == 'A'){
		    if(c[x].placa[6] == '0' || c[x].placa[6] == '2' || c[x].placa[6] == '4' || c[x].placa[6] == '7'){ 
            printf("Nome do proprietario: %s\n", c[x].proprietario);
            printf("Placa do carro: %s\n\n", c[x].placa);
            }
		}
    }
}

void consultaSegundaVogalSomaPar(sVeiculos *c){
    int soma;
    int auxcase5;
    for(int x = 0; x < VEICULOS; x++){
        for(int i = 0; i < VEICULOS; i++){
            if (c[x].placa[i]=='1') auxcase5=1;
            if (c[x].placa[i]=='2') auxcase5=2;
            if (c[x].placa[i]=='3') auxcase5=3;
            if (c[x].placa[i]=='4') auxcase5=4;
            if (c[x].placa[i]=='5') auxcase5=5;
            if (c[x].placa[i]=='6') auxcase5=6;
            if (c[x].placa[i]=='7') auxcase5=7;
            if (c[x].placa[i]=='8') auxcase5=8;
            if (c[x].placa[i]=='9') auxcase5=9;
            soma=auxcase5+soma; 
        }
        if(c[x].placa[1] == 'A' || c[x].placa[1] == 'E' || c[x].placa[1] == 'I' || c[x].placa[1] == 'O' || c[x].placa[1] == 'U'){
            if(soma % 2 == 0){
                printf("Nome do modelo: %s\n", c[x].modelo);
                printf("Cor: %s\n", c[x].cor);
                printf("Placa do carro: %s\n\n", c[x].placa);
            }
        }
    }
}

void trocaProprietarioNchassiplacassemdigito0(sVeiculos *c){
    int ncha;
    printf("insira o numero do chassi para alterar o proprietario(sem placas com digito 0):\n");
    scanf("%i", &ncha);
    for(int x=0;x<VEICULOS;x++){
        for(int i=0;i<VEICULOS;i++){
            if(c[x].placa[i] != '0'){ 
                if(ncha==c[x].nchassi){ 
                    printf("Nome do proprietario:\n");
                    scanf("%s", &c[x].proprietario);
                }
            }
        }
    }
}

void consultaVeiculo(sVeiculos *c){
    for(int x=0;x<VEICULOS;x++){ 
        printf("Nome do proprietario: %s\n", c[x].proprietario);
        printf("Combustivel? (1-alcool/ 2-diesel/ 3-gasolina): %i\n", c[x].combustivel);
        printf("Nome do modelo: %s\n", c[x].modelo);
        printf("Cor: %s\n", c[x].cor);
        printf("Numero do chassi: %i\n", c[x].nchassi);
        printf("Ano do carro: %i\n", c[x].ano);
        printf("Placa do carro: %s\n\n", c[x].placa);
    }
}

void finalizarPrograma(){ 
    printf("\nPROGRAMA FINALIZADO\n");
}
int main(){
    sVeiculos *carros;
    carros=criarVetorCarros(VEICULOS);
    if(carros==NULL){
        printf("Impossivel alocar memoria!\n");
        return 0;
    } 
    int loop=1;
    while(loop==1){
        switch(escolhaUsuario()){
            //LETRA A 
            case 1:
                escolhaVeiculo(carros);
                break;
            //LETRA A
            case 2:
                consultaVeiculo(carros);
                break;
            //LETRA B
            case 3: 
                consultaVeiculo1980Diesel(carros);
                break;
            //LETRA C
            case 4:
                consultaAfinal0247(carros);
	            break;
            //LETRA D
            case 5:
                consultaSegundaVogalSomaPar(carros);
                break;
            //LETRA F
            case 6:
                trocaProprietarioNchassiplacassemdigito0(carros);
                break;
            case 7:
                finalizarPrograma();
                return 0;
        }
    }
    free(carros);
}
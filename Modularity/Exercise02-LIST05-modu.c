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

void escolhaVeiculo(sVeiculos carros[]){
    for(int x=0;x<VEICULOS;x++){ 
        printf("Nome do proprietario:\n");
        scanf("%s", &carros[x].proprietario);
        printf("Combustivel? (1-alcool/ 2-diesel/ 3-gasolina):\n");
        scanf("%i", &carros[x].combustivel);
        printf("Nome do modelo:\n");
        scanf("%s", &carros[x].modelo);
        printf("Cor:\n");
        scanf("%s", &carros[x].cor);
        printf("Numero do chassi:\n");
        scanf("%i", &carros[x].nchassi);
        printf("Ano do carro:\n");
        scanf("%i", &carros[x].ano);
        printf("Placa do carro:\n");
        scanf("%s", &carros[x].placa);
    }
}

void consultaVeiculo1980Diesel(sVeiculos carros[]){
    for(int x=0;x<VEICULOS;x++){
        if(carros[x].ano>=1980 && carros[x].combustivel==2){
            printf("Nome do proprietario: %s\n", carros[x].proprietario);
            printf("Combustivel? (1-alcool/ 2-diesel/ 3-gasolina): %i\n", carros[x].combustivel);
            printf("Ano do carro: %i\n", carros[x].ano);
        }
    }
}

void consultaAfinal0247(sVeiculos carros[]){
    for(int x = 0; x < VEICULOS; x++){ 
	    if(carros[x].placa[0] == 'A'){
		    if(carros[x].placa[6] == '0' || carros[x].placa[6] == '2' || carros[x].placa[6] == '4' || carros[x].placa[6] == '7'){ 
            printf("Nome do proprietario: %s\n", carros[x].proprietario);
            printf("Placa do carro: %s\n\n", carros[x].placa);
            }
		}
    }
}

void consultaSegundaVogalSomaPar(sVeiculos carros[]){
    int soma;
    int auxcase5;
    for(int x = 0; x < VEICULOS; x++){
        for(int i = 0; i < VEICULOS; i++){
            if (carros[x].placa[i]=='1') auxcase5=1;
            if (carros[x].placa[i]=='2') auxcase5=2;
            if (carros[x].placa[i]=='3') auxcase5=3;
            if (carros[x].placa[i]=='4') auxcase5=4;
            if (carros[x].placa[i]=='5') auxcase5=5;
            if (carros[x].placa[i]=='6') auxcase5=6;
            if (carros[x].placa[i]=='7') auxcase5=7;
            if (carros[x].placa[i]=='8') auxcase5=8;
            if (carros[x].placa[i]=='9') auxcase5=9;
            soma=auxcase5+soma; 
        }
        if(carros[x].placa[1] == 'A' || carros[x].placa[1] == 'E' || carros[x].placa[1] == 'I' || carros[x].placa[1] == 'O' || carros[x].placa[1] == 'U'){
            if(soma % 2 == 0){
                printf("Nome do modelo: %s\n", carros[x].modelo);
                printf("Cor: %s\n", carros[x].cor);
                printf("Placa do carro: %s\n\n", carros[x].placa);
            }
        }
    }
}

void trocaProprietarioNchassiplacassemdigito0(sVeiculos carros[]){
    int ncha;
    printf("insira o numero do chassi para alterar o proprietario(sem placas com digito 0):\n");
    scanf("%i", &ncha);
    for(int x=0;x<VEICULOS;x++){
        for(int i=0;i<VEICULOS;i++){
            if(carros[x].placa[i] != '0'){ 
                if(ncha==carros[x].nchassi){ 
                    printf("Nome do proprietario:\n");
                    scanf("%s", &carros[x].proprietario);
                }
            }
        }
    }
}

void consultaVeiculo(sVeiculos carros[]){
    for(int x=0;x<VEICULOS;x++){ 
        printf("Nome do proprietario: %s\n", carros[x].proprietario);
        printf("Combustivel? (1-alcool/ 2-diesel/ 3-gasolina): %i\n", carros[x].combustivel);
        printf("Nome do modelo: %s\n", carros[x].modelo);
        printf("Cor: %s\n", carros[x].cor);
        printf("Numero do chassi: %i\n", carros[x].nchassi);
        printf("Ano do carro: %i\n", carros[x].ano);
        printf("Placa do carro: %s\n\n", carros[x].placa);
    }
}

void finalizarPrograma(){ 
    printf("\nPROGRAMA FINALIZADO\n");
}

int main(){
    sVeiculos carros[VEICULOS];
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
                return NULL;
        }
    }
}
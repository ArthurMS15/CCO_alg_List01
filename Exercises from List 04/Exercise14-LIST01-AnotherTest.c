#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ALUNOS 10
int main (){
	int i, j, acertoAluno[ALUNOS];
	char respAlunos[ALUNOS][10];
	char gabarito[10] = "DBCACDBABD";
	for (i = 0; i < ALUNOS; i++) {
		printf (" Digite o gabarito do aluno[%d]: ",i);
		scanf("%s",respAlunos[i]);
		acertoAluno[i] = 0;
		for (j = 0; j < 10; j++) {
			if (toupper(respAlunos[i][j]) == toupper(gabarito[j])) {
				acertoAluno[i]++;
			}
		}
	}
	for (i = 0; i < ALUNOS; i++) {
		printf ("\n aluno[%d] = %d",i,acertoAluno[i]);
	}
	printf ("\n\n\n");
	system ("pause");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10

int main (){
	char responses[SIZE][SIZE];
	char quest[SIZE];
	int count[SIZE];
	int s, q;
	for(q=0;q<SIZE;q++){
		printf("(Teacher) Type the correct answer for the question %d:\n", q+1);
		scanf("%s", &quest[q]);
	}
	for (s=0;s<SIZE;s++){
		printf ("Type all the alternatives in sequence made by the student %d:\n", s+1);
		scanf("%s", &responses[s]);
		count[s]=0;
		for (q=0;q<SIZE;q++){
			if (responses[s][q] == quest[q]){
				count[s]++;
			}
		}
	}
	for (s=0;s<SIZE;s++){
		printf ("Student: %d\tCorrect responses:%d\n", s, count[s]);
	}
}
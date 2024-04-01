#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#define num 2
	int main (){
		setlocale(LC_ALL,"");
		
		// 1º PRIMEiRA LINHA ---- 2º SEGUNDO COLUNA
		char disciplina[num][200];
		float notas[3][3];
		int peso [3]={3,3,4};
		float media [3];
		float soma =0;
		int i, j; 
		
		for (i= 0; i < num; i++){
			printf ("Digite o nome da disciplina: ");
			scanf("%s", &disciplina[i]);
			
			for (j = 0; j < 3; j ++){
				
				do {	
					printf ("Digite a %iª nota: ", j+1);
					scanf ("%f", &notas[i][j]);	
				}while (notas[i][j] < 0 || notas[i][j]>10); 
				
				soma+=notas[i][j]*peso[j];
			}

			media[i]=soma/10;
			soma = 0;
			printf ("\n"); //PAUSA
		}
		
		system ("cls || clear");
		
		
		
		printf ("=========== EXIBINDO OS DADOS ==========");
		for ( i= 0; i <num; i++){
			printf ("\n\n%s \n\n", disciplina[i]);
			
			for ( j= 0; j <3; j++){
				printf ("Nota: %1.f \n", notas[i][j]);
			}
			printf ("A media foi: %.1f \n", media[i]);
	   		
		}
		
	
		 
	}

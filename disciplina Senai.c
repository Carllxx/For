#include<stdio.h>
#include<locale.h>

#define TAM 2

int main() {
setlocale(LC_ALL, "");
 
 //declarando variaveis
char disciplina[2][200];
float nota[2][2], media[2], soma=0;
int i,j;
 
 //exibindo dados...
 
 for(i = 0; i < 2; i++ ) {
printf("\nDigite o nome da %i disciplina: ", i+1);
scanf ("%s",&disciplina[i]);

fflush(stdin);

for(j = 0; j < 2; j++ ) {
printf("\nDigite a %i nota: \n",j+1);
scanf("%f",&nota[i][j]);

	soma += nota [i][j];

 }
printf("\n\n");

	media [i] = soma / j;
	soma=0;
	
 }
 
 printf("\n\nEXIBINDO DADOS DO USUARIO \n\n");
 
 	 for(i = 0; i < 2; i++ ){    
       	printf("\n%iª Disciplina: %s \n", i+1, disciplina[i]);
       	
       	for(j = 0; j < 2;j++ ){
		   printf("%iº Nota: %.1f \n", j+1, nota[i][j]);
	}
	printf("Média: %.1f \n", media[i]);
}
return 0;
}

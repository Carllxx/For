#include <stdio.h>
#include <locale.h>
 int main () {
 	 setlocale(LC_ALL, "");
 	 
 	float notas[3];
 	int i;
 	
 	for (i = 0; i < 3; i++) {
 	  printf("\n=== SENAI ===\n");
 	  printf("digite a %i� nota: ",i+1);
 	  scanf("%f",&notas[i]);
 	  
 }
 
 printf("\n===EXIBINDO DADOS INSERIDOS===\n");
 for (i = 0; i < 3; i++) {
     printf ("%i� nota: %.1f \n", i+1, notas[i]);
 }
 
 return 0;
 }
 	
 	

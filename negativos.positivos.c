#include<stdio.h>
#include <locale.h>

#define TAM 2

int main (){
	setlocale(LC_ALL, "");
	
	int i;
	int numeros[TAM], pares =0, impares =0;
	int positivos =0, negativos =0, contador =0;
	int positivosPares = 0, positivosImpares = 0;
		
	do{	
	for (i = 0; i < TAM; i++) {
		
		printf ("digite a %iª numero: ", i+1);
		scanf ("%i", &numeros[i]);
		
		contador += 1;		

		if (numeros[i] % 2 == 0) {
			pares++;
			
		}else{			
			impares++;
      			
	}
		if (numeros[i] >= 0) {
			positivos ++;
		}else{
			negativos ++;
			 
		}
		
		if(positivos == pares) {
			positivosPares++;
		}
		if(positivos == impares) {
			positivosImpares++;
		}
		
		
}

} while(numeros[i] != 0);
       
		for (i = 0; i < TAM; i++ ){
			
			printf ("%iª número: %i \n", i+1,numeros[i]);
		}
		printf ("\nquantidade numeros: %i \n ", contador);
		printf ("\nquantidade positivosPares: %i \n", positivosPares);
		printf ("\nquantidades positivosImpares: %i \n", positivosImpares);
		printf ("\nquantidade negativos: %i \n", negativos);
		printf ("\nquantidade positivos: %i \n", positivos);
	
	return 0;	
}

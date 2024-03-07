#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	
	int i, numero;
	
	printf("digite um número para a tabuada: ");
	scanf("%i",&numero);
	
	printf("tabuada de multiplicação do número:  \n");
	for(i = 1; i <= 10; i++){
		printf("%i x %i = %i \n", numero, i, numero*i);
	}
	return 0;
}

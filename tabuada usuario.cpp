#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	
	int i, numero;
	
	printf("digite um n�mero para a tabuada: ");
	scanf("%i",&numero);
	
	printf("tabuada de multiplica��o do n�mero:  \n");
	for(i = 1; i <= 10; i++){
		printf("%i x %i = %i \n", numero, i, numero*i);
	}
	return 0;
}

#include <stdio.h>

int main() {

 
 int contador = 0;
 char continua; //não precisamos inicializar variavel 'continua' pois o teste
 
 do {
     //comandos a serem repetidos
     
     printf ("repetindo... \n");
     
     contador = contador;
     
     printf ("tecle 's' se desejar continuar \n");
     scanf ("%c",&continua);
     setbuf(stdin, 0);
     
 } while (continua == 's');
 
 printf ("o bloco foi repetido %d vezes",contador);
 
 return 0;
}
 

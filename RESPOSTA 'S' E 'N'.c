#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "");
    
int contador = 0;
char resposta;
float nota, soma = 0, media;

do{ 
    fflush(stdin);
    printf("deseja inserir uma nota? ");
    scanf("%c",&resposta);
    
    resposta = toupper(resposta);
    
    if (resposta != 'N'){
    printf("digite a %d� nota: ", contador + 1);
    scanf("%f",&nota);
    
    soma = soma + nota;
    contador = contador + 1;
  }    
} while(resposta != 'N');

media = soma / contador;

printf("M�dia: %.1f \n", media);

return 0;

}
    
    
    

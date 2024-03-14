#include<stdio.h> 
#include <string.h>
#include <locale.h>
#include <stdbool.h>

int main () {
    
setlocale(LC_ALL, "");

char loginCadastrado[200]= "Caio";
char senhaCadastrada[200]= "123";
char login[200];
char senha[200];
bool loginCorreto;
bool senhaCorreta;
bool consultarSistema;
 
 do{
 
 
//Exibindo dados para usuario..

printf ("\n ===== MENU PRINCIPAL ===== \n");

//solicitando dados para usuario

printf("Digite o Login: ");
    scanf("%s",&login);

    printf("Digite a Senha: ");
    scanf("%s",&senha);

    
    loginCorreto = strcmp (loginCadastrado, login) == 0;
    senhaCorreta = strcmp (senhaCadastrada, senha) == 0;

    consultarSistema = loginCorreto && senhaCorreta;


if (loginCadastrado) {
printf("O login esta cadatrado! ");
}

 if (senhaCadastrada)
 printf("A senha esta cadatrada! ");
 
 
   } while (!consultarSistema);
   
   
        printf("\n\n===CONSULTADO O SISTEMA..=== \n\n");
	

return 0;
}



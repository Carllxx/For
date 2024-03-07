#include<stdio.h>
#include<locale.h>

int main () {
    setlocale(LC_ALL, "");
    
    int i, numero, pares = 0, impares = 0;
    
    for (i = 1; i <= 5; i++) {
        
        printf("digite a %iª numero: ", i);
        scanf ("%i",&numero);
        
        if(numero % 2 == 0){
         //pares = pares +1;
         pares++;
         
        }else{ 
            //impares = impares + 1 
            impares++;
        }    
        
    }
            
      printf("\n=== EXIBINDO RESULTADO ===\n");
      printf("quantidade pares: %i \n", pares);
      printf("quantidade impares: %i \n",impares );
      
      return 0;
      
        
        
    }

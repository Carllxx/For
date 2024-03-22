#include<stdio.h>

int main(){
	
 //declarando variavel.
 int numeros[2][2];
 int i,j;
 
 //exibindo matrizes.
 printf("digite os elementos para a matriz: \n\n");
 for(i = 0; i<2; i++ ){
 	for(j = 0; j< 2; j++ ){
	 printf("Elemento da linha %d coluna %d ", i+1,j+1);
	 scanf("%d",&numeros[i][j] );
	
}
}
 
 for(i = 0; i<2; i++ ){
 	for(j = 0; j< 2; j++ ){
	 printf("\n\nElemento da linha %d coluna %d: %d \n ", i+1,j+1, numeros[i][j]);
}
}
	return 0; 
}
 

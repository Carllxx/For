#include<stdio.h>
#include<locale.h>

int main () {
    setlocale(LC_ALL, "");
   
   int i;
   float nota, media;
   
   for(i = 1; i <= 4; i++) {
    
    printf("digite a %iª nota: ", i);
    scanf("%f",&nota);
    
    media = media + nota;
    }
    
    printf("\n=== Exibindo resultado === \n");
    printf("media: %.1f \n", media);
    return 0;
    
}

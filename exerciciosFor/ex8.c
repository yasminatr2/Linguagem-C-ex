//8. Receber 10 números e, ao final, informar qual é o maior e o menor deles.

#include <stdio.h>
int main() {
 int numero;
 int guarda_maior; 
 int guarda_menor;
 int i;

 printf("Entre com o 1o numero inteiro: ");
 scanf("%d", &numero); 

 guarda_maior=numero;
 guarda_menor=numero;

for(i=1; i<10; i++) {
 printf("\nEntre com o %d o numero inteiro: ",i+1);
 scanf("%i", &numero); 
 if(numero>guarda_maior){
    guarda_maior=numero;
 }else if(numero<guarda_menor){
    guarda_menor=numero; 
 }
}
 printf("\nO menor numero entrado e: %d", guarda_menor);
 printf("\nO maior numero entrado e: %d", guarda_maior); 

}

 
 

   


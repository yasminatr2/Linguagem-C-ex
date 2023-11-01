//Crie um vetor de 10 números inteiros e imprima os números no console.
#include <stdio.h>

int main() {
  int vetor[10];

 for (int i=0;i<5;i++){
    printf("digite o [%d] numero: ",i);
    scanf("%d", &vetor[i]);
 }

 for(int i=0;i<5;i++){
    printf("%d \n",vetor[i]);
 }
 return 0;
}
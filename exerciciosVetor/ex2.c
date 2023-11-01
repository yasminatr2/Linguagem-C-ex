//Crie um vetor de 10 números reais e calcule a média dos números.

#include <stdio.h>

int main(){
    int vetor[10];
    double media=0;
    double mediaC;

    for(int i=0;i<10;i++){
        printf("Digite o [%d] numero: ",i);
        scanf("%d",&vetor[i]);
        media=media+vetor[i];
    }

     for(int i=0;i<10;i++){
        printf("voce inseriu: %d \n",vetor[i]);
    }
    mediaC=media/10;
    printf("A media dos numeros inseridos e de: [%.2f]",mediaC);
     return 0;
}
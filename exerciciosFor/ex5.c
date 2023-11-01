//5. Receber 10 números e mostrar a média aritmética no final.

#include <stdio.h>

int main(){

    int i; //controlador 
    float x; 
    float media;
    float mediaAri;
    for(i=1;i<=10;i++){
        printf("insira o [%d] numero: ",i);
        scanf("%f", &x);
        media=media+x;
    }
    mediaAri=media/10;
    printf("A media aritmetica e: %2.f", mediaAri);
    return 0;
}
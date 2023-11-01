//7. Perguntar quantos números o usuário deseja informar, receber cada um deles e mostrar a média aritmética dos valores positivos no final.

#include <stdio.h>

int main(){
    int i; 
    float x;
    int y=0;
    float media;
    float mediaRecebida;
    
    printf("quantos numeros voce desejar informar?: ");
    scanf("%d",&y);

    for(i=1;i<=y;i++){
    printf("informar os numeros: \n");
    scanf("%f",&x);
    if(x>0){   
    media=media+x;
    }
 }
    mediaRecebida=media/y;
    printf("a media aritmetica dos valores positivos sao: %.2f \n ",mediaRecebida);
 
    
}

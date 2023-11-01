#include <stdio.h>
//2. Receber 10 números e informar se cada um deles é negativo, positivo ou nulo.

int main (){
int num;
int x;
//controlador
//num<=10 condicional
//num++ incremento
    for(num=1;num<=10;num++){
        printf("Digite o %d numero: ", num);
        scanf("%d", &x);
        if(x<0){
            printf("esse numero e negativo\n");
        }else if(x>0){
            printf("esse numero e positivo\n");
        }else {
            printf("esse numero e nulo\n");
        }

}
}
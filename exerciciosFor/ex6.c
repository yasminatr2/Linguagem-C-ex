//6. Receber 10 números e, ao final, informar quantos são positivos e quantos são negativos.

#include <stdio.h>

int main (){
int i,x;
int p=0;
int n=0;
int conp=0;
int conn=0;
    for(i=1;i<=10;i++){
        printf("Digite um numero: ");
        scanf("%d", &x);
        if(x>p){
            printf("Esse numero [%d] que voce digitou e positivo \n",x);
        }else if(x<n){
          
            printf("Esse numero [%d] que voce digitou e negativo  \n",x);
        }else if(x==0){
            printf("Esse numero [%d] que voce informou e nulo \n",x);
        }
        if(x>0){
            conp++; //conta +1 na variavel conp
        }else if(x<0){
            conn++; // conta +1 na varavel conn
        }
}
        printf("tem %d numero positivos \n", conp);
        printf("tem %d numero negativos \n", conn);
}
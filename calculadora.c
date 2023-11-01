#include <stdio.h>

int main(){
    
    int num1,num2, resultado;
    char operacao;
    printf("Bem-vindo a calculadora em linguagem C!\n");
    printf("Escolha um dos operadores (+ - * /): ");
    scanf("%s", &operacao);
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    switch(operacao){
        case '+':
            resultado=num1+num2;
            break;
        case '-':
            resultado=num1-num2;
            break;
        case '*':
            resultado=num1*num2;
            break;
        case '/':
            if(num2==0 || num1==0){
                printf("divisao por 0 nao e permitido \n");
            }else{
                resultado=num1/num2;
            }

            break;
        default:
                printf("essa e uma operacao invalida");
    }
    printf("o resultado da sua operacao foi: %d", resultado);

}
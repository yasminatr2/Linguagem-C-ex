/*10. Desenvolver um programa que recebe a altura e o sexo (1 para masculino, 2 para feminino) de 15 pessoas. Este programa deverá mostrar no final:

- a menor altura do grupo;

- a média de altura das mulheres;  

- o número de homens;  

- o sexo da pessoa mais alta.*/

#include <stdio.h>

int main(){
    float altura;
    int sexo;
    int i;
    float menorA;
    float mediaF;
    float altF;
    float altM;
    int sexF;
    int cont=0;

    printf("PESQUISA ALTURA [0] Qual a sua altura?: ");
    scanf("%f",&altura);
    printf("PESQUISA SEXO [0] Qual o seu sexo? 1 para masculino, 2 para feminino: ");
    scanf("%d",&sexo);
   
    menorA=altura;
    if(sexo==2){
       sexF=sexo;
       altF=altura;
       mediaF=altF/sexF;
       cont++;
    }else if(sexo==1){
       altM=altura;
       cont++;
    }  
   
    for(i=0;i<=3;i++){
        printf("PESQUISA ALTURA [%d] Qual a sua altura?: ",i+1);
            scanf("%f",&altura);
        printf("PESQUISA SEXO [%d] Qual o seu sexo? 1 para masculino, 2 para feminino: ",i+1);
            scanf("%d",&sexo);

    if(altura<menorA){
        menorA=altura;
    }

    if(sexo==1){
        printf("(masculino) \n");
    }else if(sexo==2){
        printf("(feminino) \n");
    }
    
  }
    
    printf("A pessoa menor com [%.2f] \n",menorA);
    printf("A media da altura das mulheres e: [%.2f]\n", mediaF);
    printf("O numero de mullheres sao:%d\n",sexF);
    if(altM>altF){
        printf("O sexo da pessoa mais alta e Masculino\n");
    }
        printf("O sexo da pessoa mais alta é Feminino\n"); 

}
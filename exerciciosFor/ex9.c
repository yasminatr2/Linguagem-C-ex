/*9. A prefeitura de uma cidade de 15 habitantes fez uma pesquisa coletando salário e número de filhos de cada um. A prefeitura deseja saber:
- média do salário da população;

- média do número de filhos;

- maior salário;


*/
#include <stdio.h>

int main(){
int p; //controlador
float salario; //entrada da qtd de salario
int filhos;// entrada da qtd de filhos
float soma=0; // esse variavel vai armazenar a soma dos salarios
int soma1=0; // vai armazenar a soma dos filhos
float media=0; // vai armazenar a soma(os salarios)/15 das pessoas que colocaram salario
float media1=0;  

for(p=1;p<=5;p++){
    printf("pesquisa numero [%d], informe seu salario: ", p);
    scanf("%f", &salario);
    printf("Informe seu numero de filhos: ");
    scanf("%d", &filhos);
    soma=soma+salario;
    soma1=soma1+filhos;

 }

    printf("A soma do salario da cidade e de: %2.f \n",soma);
    printf("A soma dos filhos sao: %d \n", soma1);
    media=soma/5;
    printf("A media do salario da populacao e: %.2f \n", media);
    media1=soma1/5;
    printf("A media do numero de filhos e: %2.f\n", media1);
   
}
//saida das notas 7.0 8.0 9.5 9.9 5.2

#include <stdio.h>
int main (){

float notas[5];

for(int i=0;i<5;i++){
    printf("Insira a nota do [%d] aluno: ",i);
    scanf("%f",&notas[i]);
}
for(int i=0;i<5;i++){
    printf("A nota do [%d] aluno e: %.1f\n",i,notas[i]);
}

return 0;
}
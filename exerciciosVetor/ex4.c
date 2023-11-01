#include <stdio.h>
#include <string.h>
//le uma string e volta o tamanho dela
void main (){
      int tamanho;
      char str[100];
      printf("digite string: ");
      gets(str);
      tamanho=strlen(str);
      printf("o tamanho da string e: %d\n: ",tamanho);

}
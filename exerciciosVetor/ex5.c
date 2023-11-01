#include <string.h>
#include <stdio.h>

int main(){

char cadeia1[100], cadeia2[50];
puts ("\nDigite String1: ");
gets(cadeia1);
puts("Digite String2");
gets(cadeia2);
strcat(cadeia1, cadeia2);
puts(cadeia1);
}
//3.	Faça um procedimento que receba uma string por parâmetro e exiba de trás pra frente.
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define TF 200

char *Inverter_string(char texto[TF]){
int tam, i;	
tam = strlen(texto);
printf("Texto invertido: ");
for (i = tam-1; i>= 0; i--){
	printf("%c", texto[i]);
 } 
}

void main(){
	
	char texto[TF];
	printf("Informe uma texto: ");
	fflush(stdin);
	gets(texto);
	Inverter_string(texto);
}

//1.Escreva uma função que retorne a mensagem "olá mundo!". Está função deverá ser chamado através do programa principal. Exibir conteúdo retornado.
#include <stdio.h>
#include <conio.h>
#include <string.h>

char *msg_ola_mundo(){
	return "Ola mundo!!!";
}

void main(){
	printf("Retornar funcao string: %s", msg_ola_mundo());
}

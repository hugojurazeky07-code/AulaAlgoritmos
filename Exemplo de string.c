#include <stdio.h>
#include <conio.h>
#include <string.h> //biblioteca de comandos para tratamento de strings

char *retornar_texto(){ //função retornando strings
	return "Ola Mundo!!!";
}

void main(){
	char nome[100], sobrenome[100];
	int tamanho, i;

	printf("Informe Nome: ");
	fflush(stdin); //limpar a memória após a utilização do enter
	gets(nome); //comando para ler strings

	printf("Informe o Sobrenome: ");
	fflush(stdin);
	gets(sobrenome);

	tamanho = strlen(nome); //função para recuperar qtde de carateres de uma string
	printf("\nQtde de caracteres do nome: %d", tamanho);

	strcat(nome, sobrenome);//concatenar as duas variaveis
	printf("\nNome: %s", nome);
	
	printf("\nSobrenome: %s", sobrenome);
	
	strcpy(sobrenome, nome); //copiar uma string para outra (sobrenome = nome)
	if (strcmp(nome, sobrenome) == 0){ //string são iguais (if(nome == sobrenome))
		printf("\nVariaveis Iguais!!");
	}
	else{
		printf("\nVariaveis Diferentes!!");
	}
	
	printf("\n\nPrimeiro Caracter Nome: %c", nome[0]); //acessando uma posição especifica da string
	
	printf("\n\nNome: ");
	for(i=0;i<strlen(nome);i++){ //for para percorrer posição por posição da string
		printf("%c", nome[i]);	
	}
	
	printf("\n\nRetorna da funcao: %s", retornar_texto());//exibindo uma função que retorna strings
}

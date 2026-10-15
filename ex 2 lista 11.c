//2.	Escreva uma função que recebe a idade de um nadador por parâmetro e retorna à categoria desse nadador de acordo com a tabela abaixo:   
//Idade			Categoria
//5 a 7 anos		Infantil A
//8 a 10 anos		Infantil B
//11-13 anos		Juvenil A
//14-17 anos		Juvenil B
//>= 18 anos		Adulto
#include <stdio.h>
#include <conio.h>
#include <string.h>

char *retornar_categoria(int idade){
	switch(idade){
		case 5 ... 7:
			return "Infantil A";
			break;
		case 8 ... 10:
			return "Infantil B";
			break;
		case 11 ... 13:
			return "Juvenil A";
			break;
		case 14 ... 17:
			return "Juvenil B";
			break;
		case 18 ... 200:
			return "Adulto";
			break;
		default:
			return "Invalido!!!";	
	}
}

void main(){
	int idade;
	printf("Informe a idade: ");
	scanf("%d", &idade);
	printf("Categoria: %s", retornar_categoria(idade)); 
}

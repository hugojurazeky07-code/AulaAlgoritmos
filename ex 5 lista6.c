#include <stdio.h>
#include <conio.h>

//5.	Escreva uma função que recebe a idade de um nadador por parâmetro e retorna à categoria desse nadador de acordo com a tabela abaixo:   

//Idade			Categoria
//5 a 7 anos		1
//8 a 10 anos		2
//11-13 anos		3
//14-17 anos		4
//>= 18 anos		5

int categoria_idade(int idade){

	switch(idade)
	{
		case 5 ... 7:
		printf("Categoria 1");
		break;
		case 8 ... 10:
		printf("Categoria 2");
		break;
		case 11 ... 13:
		printf("Categoria 3");
		break;
		case 14 ... 17:
		printf("Categoria 4");
		break;
		case 18 ... 100:
		printf("Categoria 5");
		break;
		default:
			printf("opção invalida");
			break;
		
		return idade;
	}
}
void main(){
	int idade, ret;
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	ret = categoria_idade(idade);

}

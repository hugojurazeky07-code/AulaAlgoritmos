#include <stdio.h>
#include <conio.h>

void calcular_idade(){
	int aa, an, idade;
	system("cls");
	printf("<<Calcular Idade>>\n\n");
	printf("Infome o ano atual: ");
	scanf("%d", &aa);
	printf("Infome o ano nascimento: ");
	scanf("%d", &an);
	idade = aa - an;
	printf("Idade: %d\n\n", idade);
	system("pause");
}

void menu(){
	int op;
	do{
		system("cls");
		printf("\n\nMenu de opcoes: ");
		printf("\n1 - Calcular Idade");
		printf("\n2 - Media de 3 Notas");
		printf("\n3 - Maior Numero");
		printf("\n4 - Menor Numero");
		printf("\n0 - Sair");
		printf("\nInforme a opcao: ");
		scanf("%d", &op); 
		if (op == 1){
			calcular_idade(); 
		}
		else
			if (op == 2){
			
			}	
	}while(op != 0);
}

void main(){
	menu();	
}

#include <stdio.h>
#include <conio.h>

//6.	Escreva função que recebe um valor inteiro e verifica se o valor é positivo ou negativo. A função deve retornar um valor booleano. 
#include <stdio.h>
#include <conio.h>

int valor(float numero) {
    if (numero >= 0) {
        return 1;
    } else {
        return 0;
    }
}

void main() {
    float numero;
    int ret;

    printf("Informe um Numero: ");
    scanf("%f", &numero);

    ret = valor(numero);

    if (ret == 1) {
        printf("Positivo!");
    } else {
        printf("Negativo!");
    }
}


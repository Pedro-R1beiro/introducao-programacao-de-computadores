#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
    system("cls");

    char nome[50];
    int idade, matricula;
    float altura;

    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = 0;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite o numero da sua matricula: ");
    scanf("%d", &matricula);

    system("cls");
    
    printf("Bem-vindo, %s! (Aluno %d)\n\n", nome, matricula);
    printf("Informacoes do aluno:\n");
    printf("Nome: %s \nIdade: %d \nAltura: %.2f \nNumero de matricula: %d", nome, idade, altura, matricula);

    return 0;
}
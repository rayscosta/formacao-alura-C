#include <stdio.h>
int main() {
    // imprime o cabeçalho do nosso jogo
    printf("*****************************************\n");
    printf("* Bem vindo ao nosso jogo de advinhação *\n");
    printf("*****************************************\n");

    int numero_secreto = 42;

    int chute;

    printf("Qual o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);

    printf("O número secreto é: %d. Não conte para ninguém.\n", numero_secreto);

}
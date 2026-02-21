#include <stdio.h>

int main(){
    char nome[30], end[50];
    float tel;
    
    printf("Digite seu nome: ");
    scanf(" %[^\n]", nome);
    printf("Digite seu endereco: ");
    scanf(" %[^\n]", end);

    printf("Digite seu telefone: ");
    scanf("%f", &tel);
    
    printf("Nome: %s\n", nome);
    printf("Endereço: %s\n", end);
    printf("Telefone: %.f", tel);
    
    return 0;
}

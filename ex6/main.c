#include <stdio.h>

int main(){
    int a;
    printf("Digite um numero inteiro: ");
    scanf("%d", &a);
    
    int ant = a-1;
    int suc = a+1;

    printf("O antecessor do numero digitado foi %d\n", ant);
    printf("O sucessor do numero digitado foi %d", suc);
    return 0;
}

#include <stdio.h>

int main(){
    float saldo;
    
    printf("Digite o valor do saldo da poupanca: ");
    scanf("%f", &saldo);
    
    float saldonv = saldo + (saldo*0.02);
    
    printf("O saldo com reajuste de 2% é %.2f", saldonv);
    
    return 0;
}

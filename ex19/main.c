#include <stdio.h>

int main(){
    float prestv, juros;
    int periodo;
    
    printf("Digite o valor da prestacao em atraso: ");
    scanf("%f", &prestv);
    printf("Digite o percentual de juros: ");
    scanf("%f", &juros);
    printf("Digite o periodo de atraso em dias: ");
    scanf("%d", &periodo);
    
    float nvvalor = prestv + ((prestv * (juros/100))* periodo);

    printf("\nValor original da prestacao: R$ %.2f\n", prestv);
    printf("Periodo de atraso: %d dia(s)\n", periodo);
    printf("Taxa de juros cobrados: %.2f %\n", juros);
    printf("Valor total com juros: R$ %.2f\n", nvvalor);

    return 0;
}

#include <stdio.h>

int main(){
    int temp, vel; 
    printf("Digite o tempo decorrido em horas: ");
    scanf("%d", &temp);
    printf("Digite a velocidade em km: ");
    scanf("%d", &vel);
    
    float dist = temp * vel;
    float lit = dist/12;
    
    printf("A distancia percorrida foi %.2f. E foram consumidos %.2f L de gasolina.", dist, lit);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void troco(float valor){
    enum{n100, n50, n20, n10, n5, n2};
    enum{m1, m50, m25, m10, m5, m01};
    int quantidadeNotas[6];
    int quantidadeMoedas[6];

    quantidadeNotas[n100] = (int)valor/100;
    valor -= (quantidadeNotas[n100]*100);
    quantidadeNotas[n50] = (int)valor/50;
    valor -= (quantidadeNotas[n50]*50);
    quantidadeNotas[n20] = (int)valor/20;
    valor -= (quantidadeNotas[n20]*20);
    quantidadeNotas[n10] = (int)valor/10;
    valor -= (quantidadeNotas[n10]*10);
    quantidadeNotas[n5] = (int)valor/5;
    valor -= (quantidadeNotas[n5]*5);
    quantidadeNotas[n2] = (int)valor/2;
    valor -= (quantidadeNotas[n2]*2);


    quantidadeMoedas[m1] = (int)(valor/1);
    valor -= (quantidadeMoedas[m1]*1);
    quantidadeMoedas[m50] = (int)(valor/0.50);
    valor -= (quantidadeMoedas[m50]*0.50);
    quantidadeMoedas[m25] = (int)(valor/0.25);
    valor -= (quantidadeMoedas[m25]*0.25);
    quantidadeMoedas[m10] = (int)(valor/0.10);
    valor -= (quantidadeMoedas[m10]*0.10);
    quantidadeMoedas[m5] = (int)(valor/0.05);
    valor -= (quantidadeMoedas[m5]*0.05);
    quantidadeMoedas[m01] = (int)(valor/0.01) + 1;
    valor -= (quantidadeMoedas[m01]*0.01);


    printf("\nNotas de 100,00: %d", quantidadeNotas[n100]);
    printf("\nNotas de 50,00: %d", quantidadeNotas[n50]);
    printf("\nNotas de 20,00: %d", quantidadeNotas[n20]);
    printf("\nNotas de 10,00: %d", quantidadeNotas[n10]);
    printf("\nNotas de 05,00: %d", quantidadeNotas[n5]);
    printf("\nNotas de 02,00: %d\n", quantidadeNotas[n2]);


    printf("\nMoedas de 1,00: %d", quantidadeMoedas[m1]);
    printf("\nMoedas de 0,50: %d", quantidadeMoedas[m50]);
    printf("\nMoedas de 0,25: %d", quantidadeMoedas[m25]);
    printf("\nMoedas de 0,10: %d", quantidadeMoedas[m10]);
    printf("\nMoedas de 0,05: %d", quantidadeMoedas[m5]);
    printf("\nMoedas de 0,01: %d", quantidadeMoedas[m1]);
}

int main(){
    float valor;
    printf("Digite um valor para o troco\n");
    scanf("%f", &valor);
    troco(valor);
    return 0;
}

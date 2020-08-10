#include <stdlib.h>
#include <stdio.h>

int main(){
    int conta = 0;
    float saldoInicial;
    float encargos;
    float creditos;
    float limite;

    float novoSaldo;

    while(conta != -1){
        printf("Numero da conta (-1 para terminar): ");
        scanf("%d", &conta);

        if(conta == -1){
            break;
        }

        printf("Saldo Inicial: ");
        scanf("%f", &saldoInicial);

        printf("Total de Encargos: ");
        scanf("%f", &encargos);

        printf("Total de Creditos: ");
        scanf("%f", &creditos);

        printf("Limite de crédito: ");
        scanf("%f", &limite);

        novoSaldo = saldoInicial + encargos - creditos;

        if(novoSaldo > limite){
            printf("Conta: %d\n", conta);
            printf("Limite de Credito: %f\n", limite);
            printf("Saldo: %f\n", novoSaldo);
            printf("Limite de credito ultrapassado!\n");
        }

    }

    system("pause");
    return 0;
}

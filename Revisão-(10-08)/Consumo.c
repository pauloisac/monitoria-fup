#include <stdlib.h>
#include <stdio.h>

int main(){
    float gasolina;
    float km;
    float consumo;

    float gasolinaAux = 0;
    float kmAux = 0;
    float consumoGeral;

    while(gasolina != -1){
        printf("Informe quantos litros abasteceu (-1 para terminar): ");
        scanf("%f", &gasolina);

        if(gasolina == -1){
            break;
        }

        printf("Informe quantos km dirigiu: ");
        scanf("%f", &km);

        consumo = km / gasolina;

        gasolinaAux = gasolinaAux + gasolina;
        kmAux = kmAux + km;

        printf("O consumo atual e de : %f km/l \n", consumo);
    }

    consumoGeral = kmAux / gasolinaAux;

    printf("O consumo geral foi de: %f km\l ", consumoGeral);

    system("pause");
    return 0;
}

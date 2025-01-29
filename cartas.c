#include <stdio.h>

int main () {

    float população;
    float área;
    float PIB;
    int Pontosturisticos;

    printf("Digite a população:\n");
    scanf("%f" , &população);

    printf ("Digite a área:\n");
    scanf ("%f" , &área);

    printf ("Digite o PIB:\n");
    scanf ("%f" , &PIB);

    printf("Digite os pontos turisticos:\n");
    scanf("%d" , &Pontosturisticos);

    printf ("População: %f - área %f\n" , população, área);
    printf ("PIB: %f - pontosturisticos: %d\n", PIB, Pontosturisticos);

    

}
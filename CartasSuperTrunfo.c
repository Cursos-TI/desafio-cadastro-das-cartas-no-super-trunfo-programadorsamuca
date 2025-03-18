
#include <stdio.h>
int main() {
    
    //Declaração de variaveis
   
    char Estado1, Estado2;
    char Carta1[3], Carta2[3];
    char Cidade1[6], Cidade2[9];
    int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int Turismo1, Turismo2;
    
    //Entrada e saída de dados das cartas
   
    printf("Digite o Estado: \n");
    scanf("%c", &Estado1);

    printf("Digite o Código da Carta: \n");
    scanf("%s", &Carta1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &Cidade1);

    printf("Digite a população total: \n");
    scanf("%d", &Populacao1);

    printf("Digite a Área por km: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Turismo1);

    printf("Digite o Estado: \n");
    scanf("%c", &Estado2);

    printf("Digite o Código da Carta: \n");
    scanf("%s", &Carta2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &Cidade2);

    printf("Digite a população total: \n");
    scanf("%d", &Populacao2);

    printf("Digite a Área por km: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Turismo2);
   
    //impressão dos resultados no terminal

    printf("Estado: %c \n - Código da Carta: %s \n ", Estado1, Carta1);
    printf("Nome da Cidade: %s \n - População: %d \n", Cidade1, Populacao1);
    printf("Área por km: %f \n - PIB: %f \n", Area1, PIB1);
    printf("Pontos Turístico: %d \n", Turismo1);

    printf("Estado: %c \n - Código da Carta: %s \n ", Estado2, Carta2);
    printf("Nome da Cidade: %s \n - População: %d \n", Cidade2, Populacao2);
    printf("Área por km: %f \n - PIB: %f \n", Area2, PIB2);
    printf("Pontos Turístico: %d \n", Turismo2);
    
    return 0;
}

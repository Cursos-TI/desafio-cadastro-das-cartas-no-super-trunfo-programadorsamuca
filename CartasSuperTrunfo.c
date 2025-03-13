#include <stdio.h>
int main() {
    //Declaração de variaveis
   
    char Estado;
    char Carta[50];
    char Cidade[50];
    int Populacao;
    float Area;
    float PIB;
    int Turismo;
    
    //Entrada e saída de dados das cartas
   
    printf("Digite o Estado: \n");
    scanf("%c", &Estado);

    printf("Digite o Código da Carta: \n");
    scanf("%s", &Carta);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &Cidade);

    printf("Digite a população total: \n");
    scanf("%d", &Populacao);

    printf("Digite a Área por km: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    prinf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Turismo);

    //impressão dos resultados no terminal

    printf("Estado: %c \n - Código da Carta: %s \n ", Estado, Carta);
    printf("Nome da Cidade: %s \n - População: %d \n", Cidade, Populacao);
    printf("Área por km: %f \n - PIB: %f \n", Area, PIB);
    printf("Pontos Turístico: %d \n", Turismo);

    return 0;
}

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    int codigoDaCidadeA, codigoDaCidadeB;
    char nomeDaCidadeA[25], nomeDaCidadeB[25];
    float populacaoA, populacaoB;
    float areaA, areaB;
    float PIBA, PIBB;
    int numeroDePontosTuristicosA, numeroDePontosTuristicosB;
   int escolhaJogador;

    printf("Ola, jogador! bem vindo ao jogo ***SUPER TRUNFO*** \n");
    printf("digite a opçao desejada. \n");
    printf("1 - iniciar jogo \n");
    printf("2 - regras \n");
     scanf("%d", &escolhaJogador);

     switch (escolhaJogador)
    {
    case 1:
        printf("ok ...carregando \n");
        break;
    case 2:
        printf(" Regras do Jogo Super Trunfo - Comparação de Cartas  \n");
        break;
    
    default:
        break;
    }
    printf("digite o codigo da cidade: \n");
    scanf("%d", &codigoDaCidadeA);

    printf("digite o nome da cidade:\n");
    scanf("%s", &nomeDaCidadeA);

    printf("digite a população: \n");
    scanf("%f", &populacaoA);

    printf("digite a area da cidade: \n");
    scanf("%f", &areaA);
    printf("digite o PIB da cidade \n");
    scanf("%f", &PIBA);

    printf("digite quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &numeroDePontosTuristicosA);

    printf("o codigo da cidade é: %d - O nome da cidade é: %s - a população de sua cidade é: %f  - a area é: %f - o PIB da sua cidade é: %f - a numero de pontos turisticos de sua cidade é: %d , estes são os dados da sua cidade. \n", codigoDaCidadeA, nomeDaCidadeA, populacaoA, 
    areaA , PIBA, numeroDePontosTuristicosA);

    //agora a segunda carta.

     printf("digite o codigo da cidade: \n");
    scanf("%d", &codigoDaCidadeB);

    printf("digite o nome da cidade:\n");
    scanf("%s", &nomeDaCidadeB);

    printf("digite a população: \n");
    scanf("%f", &populacaoB);

    printf("digite a area da cidade: \n");
    scanf("%f", &areaB);
    printf("digite o PIB da cidade \n");
    scanf("%f", &PIBB);

    printf("digite quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &numeroDePontosTuristicosB);

    printf("o codigo da cidade é: %d - O nome da cidade é: %s - a população de sua cidade é: %f  - a area é: %f - o PIB da sua cidade é: %f - a numero de pontos turisticos de sua cidade é: %d , estes são os dados da sua cidade. \n", codigoDaCidadeB, nomeDaCidadeB, populacaoB, 
    areaB , PIBB, numeroDePontosTuristicosB);

    

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

   
    if (populacaoA > populacaoB) {
        printf("Cidade 1 tem maior população.\n");
     } else  {printf("Cidade 2 tem maior população.\n");
     }

       if (areaA > areaB) {
        printf("Cidade 1 tem maior area.\n");
     } else  {printf("Cidade 2 tem maior area.\n");
     }

       if (PIBA > PIBB) {
        printf("Cidade 1 tem maior pib.\n");
     } else  {printf("Cidade 2 tem maior pib.\n");
     }

       if (numeroDePontosTuristicosA > numeroDePontosTuristicosB) {
        printf("Cidade 1 tem maior numero de pontos turisticos.\n");
     } else  {printf("Cidade 2 tem maior numero de pontos turisticos.\n");
     }

     

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}


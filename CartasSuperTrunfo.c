#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    
    //Primeira carta

    char estado;
    char codigo_carta[3];
    char nome_cidade[20];
    unsigned long int populacao;
    float area;
    float pib;
    int ponto_turistico;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;

    //Recolhe imformações do usuário

    printf("Informaçõs da Primeira carta \n\n"); //Aviso de início da primeira carta

    printf("Entre com Estado: \n"); // Solicita estado ao usuário
    scanf(" %c", &estado); // Recolhe a informação 

    printf("Entre com o Código: \n"); // Solicita código ao usuário
    scanf("%s", &codigo_carta); // Recolhe informação 

    printf("Entre com a Cidade: \n"); // Solicita cidade ao usuário
    scanf(" %[^\n]", &nome_cidade); // Recolhe informação

    printf("Entre com o número de habitantes: \n"); //Solicita habitantes ao usuário
    scanf("%lu", &populacao); // Recolhe informação 

    printf("Entre com a area em  Km²: \n"); // Solicita área ao usuário 
    scanf("%f", &area); // Recolhe informação 

    printf("Entre com o PIB da cidade: \n"); // Solicita PIB ao usuário 
    scanf("%f", &pib); // Recolhe informação 

    printf("Entre a quantidade de pontos turisticos da cidade: \n"); // Solicita ponto turistico ao usuário
    scanf("%d", &ponto_turistico); // Recolhe informação

    densidade_populacional = populacao / area; //calculando densidade
    pib_per_capita = pib * 1e9 / populacao ; //calculando PIBE per Capita
    super_poder = (float) + area + pib + (float)ponto_turistico + pib_per_capita + (1 / densidade_populacional); // Calculo super poder 

    
    //Resultado da primeira carta

    printf("\n\nCarta 1 \n"); // Informação da primeira carta
    printf("Estado: %c\n", estado); // Imprime estado
    printf("Código: %c%s\n", estado, codigo_carta); // Imprimi Código
    printf("Cidade: %s\n", nome_cidade); // Imprime nome da cidade
    printf("População: %lu\n", populacao); // Imprime População
    printf("Área: %.2f km²\n", area); // Imprime área
    printf("PIB: %.2f bilhões de reais\n", pib); //Imprime PIB
    printf("Pontos Turisticos: %d\n", ponto_turistico); //Imprime Ponto turístico
    printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional); //Imprime Ponto turístico
    printf("PiB per Capita: %.2f\n", pib_per_capita); //Imprime Ponto turístico
    printf("super poder %.2f", super_poder); //Imprime super poder 


    //Segunda Carta

    char estado_2;
    char codigo_carta_2[3];    
    char nome_cidade_2[20];
    unsigned long int populacao_2;
    float area_2;
    float pib_2;
    int ponto_turistico_2;
    float densidade_populacional_2;
    float pib_per_capita_2;
    float super_poder_2;

    //Informações da Segunda carta

    printf("\n\nInformações da Segunda carta \n\n"); //Aviso de início da segunda carta
    
    printf("Entre com  Estado: \n"); // Pedido de informação do estado
    scanf(" %c", &estado_2); // Recolhe a informação

    printf("Entre com o Código: \n"); // Pedido de informação da carta
    scanf("%s", &codigo_carta_2); // Recolhe informação

    printf("Entre com o nome cidade: \n"); // Pedido de informação da cidade
    scanf(" %[^\n]", &nome_cidade_2); // Recolhe informação

    printf("Entre com o número de habitantes: \n"); //Pedido de informação de habitantes
    scanf("%lu", &populacao_2); // Recolhe informação

    printf("Entre com a área em  Km²: \n"); // Pedido de informação Em Km²
    scanf("%f", &area_2); // Recolhe informação

    printf("Entre com o PIB: \n"); // Pedido de informação da cidade
    scanf("%f", &pib_2); // Recolhe informação

    printf("Entre a quantidade de pontos turisticos da cidade:\n"); // Pedido de informação ponto turistico
    scanf("%d", &ponto_turistico_2); // Recolhe informação

    densidade_populacional_2 = populacao_2 / area_2; //Calculando densidade populacional
    pib_per_capita_2 = pib_2 * 1e9 / populacao_2; // calculando PIBE per Capita
    super_poder_2 = (float) + area_2 + pib_2 + (float)ponto_turistico_2 + pib_per_capita_2 + (1 / densidade_populacional_2); // Calculando super poder


    //Resultado da segunda carta

    printf("\n\nCarta 2 \n"); // informação da segunda carta
    
    printf("Estado: %c\n", estado_2); // imprime estado
    printf("Código: %c%s\n", estado_2, codigo_carta_2); // imprime código
    printf("Cidade: %s\n", nome_cidade_2); // imprime cidade
    printf("População: %lu\n", populacao_2); // imprime população
    printf("Área: %.2f km²\n", area_2); // Imprime área
    printf("PIB: %.2f bilhões de reais\n", pib_2); // Imprime PIB
    printf("Pontos Turisticos: %d\n", ponto_turistico_2); // Imprime ponto turístico
    printf("Densidade Populacional: %.2f km²\n", densidade_populacional_2); //Imprime Ponto turístico
    printf("PiB per Capita: %.2f\n", pib_per_capita_2); //Imprime Ponto turístico
    printf("super poder %.2f\n\n", super_poder_2); // Imprime super poder

    //Informações da carta vencedora

    printf("Comparação de Cartas\n\n");

    printf("Populacao: Carta %d venceu (%d)\n", (populacao_2 > populacao) + 1,  populacao > populacao_2 ); //Comparação população

    printf("Área: Carta %d venceu (%d)\n", (area_2 > area) + 1, area > area_2); //comparação área

    printf("PiB: Carta %d venceu (%d)\n", (pib_2 > pib) + 1,  pib > pib_2); // comparação PIB

    printf("Pontos turisticos: Carta %d venceu (%d)\n", (ponto_turistico_2 > ponto_turistico)+ 1, ponto_turistico > ponto_turistico_2); //Comparação pontos turisticos

    printf("Densidade populacional: Carta %d venceu (%d)\n", (densidade_populacional_2 < densidade_populacional) + 1, densidade_populacional < densidade_populacional_2); //comparação densidade populacional

    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_per_capita_2 > pib_per_capita) + 1, pib_per_capita > pib_per_capita_2); // comparação PIB per Capita

    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder_2 > super_poder) + 1, super_poder > super_poder_2); //Comparação Super poder



    return 0;
}

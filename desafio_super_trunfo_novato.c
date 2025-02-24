#include <stdio.h> 

int main(){
    //Se necessário for adicionar mais cartas, basta adicionar mais variações das abaixo (exemplo nome_da_cidade3 nome_da_cidade4 .....)
    int populacao1,populacao2,PT1,PT2,numero_da_carta1,numero_da_carta2;
    
    float area1, area2 ,PIB1,PIB2;
    
    char nome_da_cidade1[20],nome_da_cidade2[20],codigo_da_carta1[10],codigo_da_carta2[10],estado1[10], estado2[10];

    // PT1 E PT2 SÃO  ABREVIAÇÃO DE "PONTOS TURISTICOS"
    
    //Apresentação

    printf("SUPERTRUNFO\n");

    //Coletando informação da primeira carta
     
    printf("Insira o número da carta que deseja adicionar:\n");
    scanf("%d", &numero_da_carta1);

    printf("Insira o estado da carta escolhendo uma letra (letras disponiveis entre 'A' a 'H'):\n");
    scanf("%s", &estado1);
    printf("Insira o código da carta (ESTADO + NUMERO de '1' a '4' Ex :A01 , B02....):\n");
    scanf("%s", &codigo_da_carta1);

    printf("Insira o nome da cidade desta carta: \n");
    scanf("%s", &nome_da_cidade1);

    printf("Insira a população de %s\n",nome_da_cidade1);
    scanf("%d", &populacao1);


    printf("Insira a área em km² de  %s\n",nome_da_cidade1);
    scanf("%f", &area1);

    printf("Insira o PIB de %s\n",nome_da_cidade1);
    scanf("%f", &PIB1);

    printf("Insira a quantidade de pontos túristicos de %s\n",nome_da_cidade1);
    scanf("%d",&PT1);
    printf("\n");
    
    printf("Informações da carta inseridas com sucesso!\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

  
   
    //Fim da primeira coleta e Inicio da segunda

    printf("Insira o número da segunda carta que deseja adicionar:\n");
    scanf("%d", &numero_da_carta2);

    printf("Insira o estado da carta escolhendo uma letra (letras disponiveis entre 'B' a 'H'):\n");
    scanf("%s", &estado2);

    printf("Insira o código da carta (ESTADO + NUMERO de '2' a '4' Ex : B02, C03...):\n");
    scanf("%s", &codigo_da_carta2);

    printf("Insira o nome da cidade desta carta: \n");
    scanf("%s", &nome_da_cidade2);

    printf("Insira a população de %s\n",nome_da_cidade2);
    scanf("%d", &populacao2);


    printf("Insira a área em km² de  %s\n",nome_da_cidade2);
    scanf("%f", &area2);

    printf("Insira o PIB de %s\n",nome_da_cidade2);
    scanf("%f", &PIB2);

    printf("Insira a quantidade de pontos túristicos de %s\n",nome_da_cidade2);
    scanf("%d",&PT2);
    printf("\n");
    
    printf("Informações da carta inseridas com sucesso!\n");
    printf("\n");
    printf("\n");
    printf("\n");
    //FIM DA COLETA

    //EXIBIÇÃO CARTA1
    printf("CARTA 1:\n");
    printf("Estado: %s", estado1);
    printf("\n");
    printf("Código: %s",codigo_da_carta1);
    printf("\n");
    printf("Nome da Cidade: %s", nome_da_cidade1);
    printf("\n");
    printf("Polulação: %d", populacao1);
    printf("\n");
    printf("Área: %.2f km²",area1);
    printf("\n");
    printf("PIB: %.2f bilhões de reais",PIB1);
    printf("\n");
    printf("Número de Pontos Túristicos: %d",PT1);
    printf("\n");
    printf("\n");
    printf("\n");
    //Fim da exibição da Carta 1

    //EXIBIÇÃO CARTA2
    printf("CARTA 2:\n");
    printf("Estado: %s", estado2);
    printf("\n");
    printf("Código: %s",codigo_da_carta2);
    printf("\n");
    printf("Nome da Cidade: %s", nome_da_cidade2);
    printf("\n");
    printf("Polulação: %d", populacao2);
    printf("\n");
    printf("Área: %.2fkm²",area2);
    printf("\n");
    printf("PIB: %.2f bilhões de reais ",PIB2);
    printf("\n");
    printf("Número de Pontos Túristicos: %d",PT2);
    printf("\n");
    printf("\n");
    //Fim da exibição Carta 2

    
return 0;

}
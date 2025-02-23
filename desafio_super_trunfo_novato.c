#include <stdio.h> 

int main(){
    //se necessário for adicionar mais cartas, basta adicionar mais variações das abaixo (exemplo nome_da_cidade3 nome_da_cidade4 .....)
    int populacao1,populacao2,PT2,PT1,numero_da_carta1,numero_da_carta2;
    
    float area1, area2 ,PIB1,PIB2;
    
    char nome_da_cidade1[50],nome_da_cidade2[50],codigo_da_carta1[50], codigo_da_carta2[50], estado1[10], estado2[10];

    // PT1 E PT2 SÃO  ABREVIAÇÃO DE "PONTOS TURISTICOS"
    

    //Coletando informação da primeira carta

    printf("insira o número da carta que deseja adicionar:\n");
    scanf("%d", &numero_da_carta1);

    printf("insira a letra inicial do estado dessa carta:\n");
    scanf("%s", &estado1);
    printf("Qual o código desta carta (LETRA INICIAL + NUMERO ):\n");
    scanf("%s", &codigo_da_carta1);

    printf("insira o nome da cidade desta carta: \n");
    scanf("%s", &nome_da_cidade1);

    printf("insira a população de %s\n",nome_da_cidade1);
    scanf("%d", &populacao1);


    printf("Insira a área em km² de  %s\n",nome_da_cidade1);
    scanf("%f", &area1);

    printf("Insira o PIB de %s\n",nome_da_cidade1);
    scanf("%f", &PIB1);

    printf("Insira a quantidade de pontos túristicos de %s\n",nome_da_cidade1);
    scanf("%d",&PT1);
    printf("\n");
    
    printf("informações da carta inseridas com sucesso!\n");
    printf("\n");
  
   
    //Fim da primeira coleta e Inicio da segunda

    printf("insira o número da segunda carta que deseja adicionar:\n");
    scanf("%d", &numero_da_carta2);

    printf("insira a letra inicial do estado dessa carta:\n");
    scanf("%s", &estado2);

    printf("Qual o código desta carta (LETRA INICIAL + NUMERO ):\n");
    scanf("%s", &codigo_da_carta2);

    printf("insira o nome da cidade desta carta: \n");
    scanf("%s", &nome_da_cidade2);

    printf("insira a população de %s\n",nome_da_cidade2);
    scanf("%d", &populacao2);


    printf("Insira a área em km² de  %s\n",nome_da_cidade2);
    scanf("%f", &area2);

    printf("Insira o PIB de %s\n",nome_da_cidade2);
    scanf("%f", &PIB2);

    printf("Insira a quantidade de pontos túristicos de %s\n",nome_da_cidade2);
    scanf("%d",&PT2);
    printf("\n");
    
    printf("informações da carta inseridas com sucesso!\n");
    printf("\n");
   

    printf("informações da carta inseridas com sucesso!\n");
    printf("\n");
    printf("\n");
    
    //FIM DA COLETA, HORA DA EXIBIÇÃO

    printf("CARTA 1:\n");
    printf("\n");
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
    //CARTA2
    printf("CARTA 2:\n");
    printf("\n");
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
    printf("FIM");

    return 0;

}
#include <stdio.h> 
 
 int main(){
 
     //Se necessário for adicionar mais cartas, basta adicionar mais variações das abaixo (exemplo nome_da_cidade3 nome_da_cidade4 .....)
 
     int PT1,PT2,numero_da_carta1,numero_da_carta2;
     unsigned long int populacao1,populacao2;
 
     float area1, area2 ,PIB1,PIB2,densidadepop1,densidadepop2,percapta1,percapta2;
 
     char nome_da_cidade1[20],nome_da_cidade2[20],codigo_da_carta1[10],codigo_da_carta2[10],estado1[2],estado2[2];
 
     // PT1 E PT2 SÃO  ABREVIAÇÃO DE "PONTOS TURISTICOS"
 
     //Apresentação
 
     printf("SUPERTRUNFO\n");
 
     //Coletando informação da primeira carta
 
     printf("Insira o número da carta que deseja adicionar:\n");
     scanf("%d", &numero_da_carta1);
 
     printf("Insira o estado da carta  DUAS letras (exemplo PR, SP, MT, SC ):\n");
     scanf(" %s", estado1);
 
     printf("Insira o código da carta (Ex: PR01, PR02...):\n");
     scanf("%s", codigo_da_carta1);
 
     printf("Insira o nome da cidade desta carta: \n");
     scanf("%s", nome_da_cidade1);
 
     printf("Insira a população de %s:\n", nome_da_cidade1);
     scanf("%lu", &populacao1);
 
     printf("Insira a área em km² de %s (use ponto para separar decimais, ex 1234.22):\n", nome_da_cidade1);
     scanf("%f", &area1);
 
     printf("Insira o PIB de %s em bilhoes de reais(ex : 124.55)\n",nome_da_cidade1);
     scanf("%f", &PIB1);
 
     printf("Insira a quantidade de pontos turísticos de %s:\n", nome_da_cidade1);
     scanf("%d", &PT1);
 
     printf("\n");
 
     printf("***Informações da carta inseridas com sucesso***\n");
     printf("\n");
     printf("\n");
     printf("\n");
 
     //Fim da primeira coleta e Inicio da segunda
 
     printf("Insira o número da segunda carta que deseja adicionar:\n");
     scanf("%d", &numero_da_carta2);
 
     printf("Insira o estado da carta escolhendo DUAS letras (exemplo PR, SP, MT, SC ) :\n");
     scanf(" %s", estado2);
 
     printf("Insira o código da carta (ESTADO + NUMERO de '2' a '4' Ex : SP03, MT04...):\n");
     scanf("%s", codigo_da_carta2);
 
     printf("Insira o nome da cidade desta carta: \n");
     scanf("%s", nome_da_cidade2);
 
     printf("Insira a população de %s\n",nome_da_cidade2);
     scanf("%lu", &populacao2);
 
 
     printf("Insira a área em km² de %s (use ponto para separar decimais, ex 1234.22):\n", nome_da_cidade2);
     scanf("%f", &area2);
 
     printf("Insira o PIB de %s em bilhoes de reais(ex : 124.55)\n",nome_da_cidade2);
     scanf("%f", &PIB2);
 
     printf("Insira a quantidade de pontos túristicos de %s\n",nome_da_cidade2);
     scanf("%d",&PT2);
     printf("\n");
 
     printf("***Informações da carta inseridas com sucesso***\n");
     printf("\n");
     printf("\n");
     printf("\n");
 
     //FIM DA COLETA DE DADOS
 
     /*Operações aritméticas para obtenção de valores
     Na divisão,visando obter o valor de  densidade populacional se fez necessário realizar o cast  
     inserindo (float) forçando o numero inteiro ser tratado com decimal para não perder a precisão
     na hora da exibição do calculo matematico
     O PIB é inserido em bilhões, então multiplicamos por 1.000.000.000 para converter para reais.*/  
 
     //CALCULOS DE DENSIDADE E PERCAPTA E SUPER-PODER (RESPEITE AS REGRAS ACIMA AO INSERIR NOVAS CIDADES PARA EXIBIÇÃO CORRETA DE VALORES)
     densidadepop1 = (float)populacao1 / area1;
     densidadepop2 =  (float)populacao2 / area2;
     percapta1 = (PIB1 * 1000000000) / populacao1;
     percapta2 = (PIB1 * 1000000000) / populacao2;
     float superPoderCarta1 = populacao1 + area1 + PIB1 + PT1 + percapta1 + (-1 / densidadepop1);
     float superPoderCarta2 = populacao2 + area2 + PIB2 + PT2 + percapta2 + (-1 / densidadepop2);
 
     //EXIBIÇÃO CARTA1
     printf("CARTA 1:\n");
     printf("Estado: %s", estado1);
     printf("\n");
     printf("Código: %s",codigo_da_carta1);
     printf("\n");
     printf("Nome da Cidade: %s", nome_da_cidade1);
     printf("\n");
     printf("Polulação: %lu", populacao1);
     printf("\n");
     printf("Área: %.2f km²",area1);
     printf("\n");
     printf("PIB: %.2f bilhões de reais",PIB1);
     printf("\n");
     printf("Número de Pontos Túristicos: %d",PT1);
     printf("\n");
     printf("Densidade Populacional: %.2f hab/km²", densidadepop1);
     printf("\n");
     printf("PIB per Capita:%.2f reais ",percapta1);
     printf("\n");
     printf("o SUPER PODER da carta 1 é :%d",superPoderCarta1);
     printf("\n");
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
     printf("Área: %.2f km²",area2);
     printf("\n");
     printf("PIB: %.2f bilhões de reais ",PIB2);
     printf("\n");
     printf("Número de Pontos Túristicos: %d",PT2);
     printf("\n");
     printf("Densidade Populacional: %.2f hab/km²", densidadepop2);
     printf("\n");
     printf("PIB per Capita:%.2f reais ",percapta2);
     printf("\n");
     printf("o SUPER PODER da carta 2 é :%d",superPoderCarta2);
     printf("\n");
     printf("\n");
     printf("\n");
     printf("\n");
 
 
     //Fim da exibição Carta 2
 
     // EXIBICAO DA COMPARAÇÃO DAS CARTAS E ESCOLHA DO ATRIBUTO VENCEDOR 
     // EXIBICAO DA COMPARAÇÃO DAS CARTAS E ESCOLHA DO ATRIBUTO VENCEDOR (o atributo de escolhar para compração NÃO É ESCOLHIDO PELO USÁRIO NESSE NIVEL DO DESAFIO )
 
     //Comparação de população
     if(populacao1 > populacao2){
        printf("*****Comparação de Cartas*****\n");
        printf("\n");
        printf("ATributo : POPULAÇÂO\n");
        printf("Carta 1 - %s %u\n", nome_da_cidade1,populacao1);
        printf("Carta 2 - %s %u\n",nome_da_cidade2 , populacao2);
        printf("Resultado Carta 1 (%s) venceu!\n",nome_da_cidade1); 
 
     }else{printf("*****Comparação de Cartas*****\n");
           printf("\n");
           printf("ATributo : POPULAÇÂO\n");
           printf("Carta 1 - %s %u\n", nome_da_cidade1, populacao1);
           printf("Carta 2 - %s %u\n", nome_da_cidade2, populacao2);
           printf("Resultado Carta 2 (%s) venceu!",nome_da_cidade2); }
 
 
 //Fim da Primeira Comparação
 
 
 
 return 0;
 
 }
 
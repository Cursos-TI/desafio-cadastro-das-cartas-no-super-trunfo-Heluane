#include <stdio.h>
int main() {
    
    char estado1;
    char nomedacidade1[60];
    char codigodacarta1[4];
    int populacao1;
    int pontosturisticos1;
    float area1;
    float pib1;
    float densidade1;
    float percapta1;
    
    char estado2;
    char nomedacidade2[60];
    char codigodacarta2[4];
    int populacao2;
    int pontosturisticos2;
    float area2;
    float pib2;
    float densidade2;
    float percapta2;
    
    printf ("Vamos começar a primeira carta. \n");
    
    printf ("Qual o estado? (letra de A a H) \n");
    scanf (" %c", &estado1);
    printf ("Qual o nome da cidade? \n");
    scanf ("%s", &nomedacidade1);
    printf ("Qual o código da carta? Ex: A01 \n");
    scanf ("%s", &codigodacarta1);
    printf ("Qual a população dessa cidade? \n");
    scanf ("%d", &populacao1);
    printf ("Quantos são os pontos turisticos? \n");
    scanf ("%d", &pontosturisticos1);
    printf ("Qual a área desta cidade? \n");
    scanf ("%f", &area1);
    printf ("Qual o PIB desta cidade? \n");
    scanf ("%f", &pib1);
    
    densidade1 = (float) (populacao1 / area1);
    percapta1 = (float) (populacao1 / pib1);

    printf ("Vamos começar a segunda carta. \n");
    
    printf ("Qual o estado? (letra de A a H) \n");
    scanf (" %c", &estado2);
    printf ("Qual o nome da cidade? \n");
    scanf ("%s", &nomedacidade2);
    printf ("Qual o código da carta? Ex: A01 \n");
    scanf ("%s", &codigodacarta2);
    printf ("Qual a população dessa cidade? \n");
    scanf ("%d", &populacao2);
    printf ("Quantos são os pontos turisticos? \n");
    scanf ("%d", &pontosturisticos2);
    printf ("Qual a área desta cidade? \n");
    scanf ("%f", &area2);
    printf ("Qual o PIB desta cidade? \n");
    scanf ("%f", &pib2);
    
    densidade2 = (float) (populacao2 / area2);
    percapta2 = (float) ( populacao2 / pib2);
    
    printf ("\n--Carta 1--\n");
    printf ("Estado: %c \n", estado1);
    printf ("Nome da cidade: %s \n", nomedacidade1);
    printf ("Código da carta: %s \n", codigodacarta1);
    printf ("População: %d \n", populacao1);
    printf ("Número de pontos turísticos: %d \n", pontosturisticos1);
    printf ("Área: %.2f km² \n", area1);
    printf ("Pib: %.2f bilhões de reais \n", pib1);
    printf ("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf ("PIB per capita: %.2f reais \n", percapta1);
    
    printf ("\n--Carta 2--\n");
    printf ("Estado: %c \n", estado2);
    printf ("Nome da cidade: %s \n", nomedacidade2);
    printf ("Código da carta: %s \n", codigodacarta2);
    printf ("População: %d \n", populacao2);
    printf ("Número de pontos turísticos: %d \n", pontosturisticos2);
    printf ("Área: %.2f km² \n", area2);
    printf ("Pib: %.2f bilhões de reais \n", pib2);
    printf ("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf ("PIB per capita: %.2f reais \n", percapta2);
    
    return 0;
}

#include <stdio.h>
int main() {
    
    char estado1;
    char nomedacidade1[60];
    char codigodacarta1[4];
    int populacao1;
    int pontosturisticos1;
    float area1;
    float pib1;
    
    char estado2;
    char nomedacidade2[60];
    char codigodacarta2[4];
    int populacao2;
    int pontosturisticos2;
    float area2;
    float pib2;
    
    printf ("Qual o estado? (letra de A a H) \n");
    scanf ("%s", &estado1);
    
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
    
    printf ("Vamos começar a segunda carta. \n");
    
        printf ("Qual o estado? (letra de A a H) \n");
    scanf ("%s", &estado2);
    
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
    
    printf ("\n--Carta 1--\n");
    
    printf (" Estado: %c\n", estado1);
    printf ("Nome da cidade: %s \n", nomedacidade1);
    printf ("Código da carta: %s \n", codigodacarta1);
    printf ("População: %d \n", populacao1);
    printf ("Número de pontos turísticos: %d \n", pontosturisticos1);
    printf ("Área: %f \n", area1);
    printf ("Pib: %f \n", pib1);
    
    printf ("\n--Carta 2--\n");
    
    printf (" Estado: %c\n", estado2);
    printf ("Nome da cidade: %s \n", nomedacidade2);
    printf ("Código da carta: %s \n", codigodacarta2);
    printf ("População: %d \n", populacao2);
    printf ("Número de pontos turísticos: %d \n", pontosturisticos2);
    printf ("Área: %f \n", area2);
    printf ("Pib: %f \n", pib2);
    
    return 0;
    
}

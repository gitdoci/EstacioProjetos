#include <stdio.h>
    int main(){
        //variaveis para a carta 1
        char estado1[3];
        char codigo1[4];
        char cidade1[50];
        int populacao1, pontoturisticos1;
        float area1, pib1;
        
        //inicio da captura de dados para a carta 1; no caso a cidade do usuário
        printf("Qual é o nome da sua cidade?: \n");
        scanf("%s\n", &cidade1);

        //capturando a letra que usaremos para o código da carta
        printf("Qual é a sigla do seu estado? (ex: SP): \n");
        scanf("%s\n", &estado1);//recebe no máximo 2 letras do usuário

        //capturando o número de habitantes
        printf("Quantos habitantes vivem na sua cidade?: \n");
        scanf("%d", &populacao1);

        //Capturando a área da cidade
        printf("Qual é a Área em KM² da sua cidade?: \n");
        scanf("%f", &area1);

        //Capturando o PIB 
        printf("Qual é PIB da sua cidade? (Produto Interno Bruto): \n");
        scanf("%f", &pib1);

        //Capturando o número de pontos turisticos
        printf("Qual o número de pontos Turisticos da sua cidades?; \n");
        scanf("%d", &pontoturisticos1);



       // printf("O Código da Carta é %c1\n", estado1[0]); //apresenta o código da carta usando somente a primeira letra da sigla pra construir o código.










    }
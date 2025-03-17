#include <stdio.h>

int main(){
    //TEMA 2 - DESAFIO SUPER TRUNFO PAISES "NOVATO"
    // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
    // Siga os comentários para implementar cada parte do desafio.

    char estado[20],estado2[20];
    char codigo[20],codigo2[20];
    char cidade[40],cidade2[40];
    int populacao1,populacao2;
    float area,area2;
    float Pib,Pib2;
    int pontosturistico,pontosturistico2;

    // ENTRADAS DE DADOS CARTA1
    printf("Carta1!\n");

    printf("Informe a sigla do seu Estado: \n");   
    scanf(" %2s",&estado);

    printf("codigo :\n");
    scanf("%s",codigo);

    printf("nome da Cidade :\n");
    scanf("%s",cidade);

    printf("populacao :\n");
    scanf("%d",&populacao1);

    printf("Area :\n");
    scanf("%f",&area);

    printf("pib :\n");
    scanf("%f",&Pib);

    printf("numero de pontos turisticos :\n");
    scanf("%d",&pontosturistico);

    // ENTRADAS DE DADOS CARTA2
    printf("\n");
    printf("Carta2!\n");

    printf("Informe a sigla do seu Estado: \n");
    scanf(" %2s",&estado2);

    printf("codigo :\n");
    scanf("%s",codigo2);

    printf("nome da Cidade:\n");
    scanf("%s",cidade2);

    printf("populacao :\n");
    scanf("%d",&populacao2);

    printf("Area :\n");
    scanf("%f",&area2);

    printf("pib :\n");
    scanf("%f",&Pib2);

    printf("numero de pontos turisticos :\n");
    scanf("%d",&pontosturistico2);

    //FORMAÇÃO DE SAIDA - CARTA1
    printf("Carta1!\n");

    printf("estado:%2s\n",estado);
    printf("Codigo:%s\n",codigo);
    printf("Cidade:%s\n",cidade);
    printf("Populacao:%d\n",populacao1);
    printf("Area:%f\n",area);
    printf("PIB:%f\n",Pib);
    printf("Pontos Turisticos:%d\n",pontosturistico);

    //FORMAÇÃO DE SAIDA - CARTA2
    printf("\n");
    printf("Carta2!\n");


    printf("estado:%2s\n",estado2);
    printf("Codigo:%s\n",codigo2);
    printf("Cidade:%s\n",cidade2);
    printf("Populacao:%d\n",populacao2);
    printf("Area:%f\n",area2);
    printf("PIB:%f\n",Pib2);
    printf("Pontos Turisticos:%d\n\n",pontosturistico2);
    
    ////TEMA 2 - Comparando Cartas do Super Trunfo////
    //A CIDADE COM MAIS POPULAÇAO "VENCE"

    //Comparação de cartas (Atributo: População):

    printf("Carta 1 - (%s)%s :%d\n", cidade,estado,populacao1);
    printf("Carta 2 - (%s)%s :%d\n\n", cidade2,estado2,populacao2);

    //Resultado final  

    if (populacao1 > populacao2){
        printf("Resultado: Carta 1 - (%s) VENCEU!\n", cidade);
    }else{
        printf("Resultado: Carta 2 - (%s) VENCEU!\n", cidade2);
    }




    return 0;
}
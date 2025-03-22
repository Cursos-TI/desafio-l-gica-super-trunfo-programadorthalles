#include <stdio.h>
#include <stdlib.h>
#include <time.h>


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
       
      // ** Desafio: Nível Aventureiro ** //
          // ** MENU INTERATIVO **// 
         // OPCAO DE MENU CARTA 1 //

    int opcao1, opcao2;

    printf("* ESCOLHA UM ATRIBUTO PARA COMPARAÇÃO *\n");
    printf("1[]- populacao \n");
    printf("2[]- area \n");
    printf("3[]- numeros de pontos turisticos \n");
    printf("4[]- PIB  \n");
  
    printf("digite a opcao desejada: ");
    scanf("%d", &opcao1);
    printf("\n");
  switch (opcao1)
  {
    case 1:
    printf("Comparacao de Populacao !\n" );
    printf("Carta 1 - (%s)%s - habitantes :%d\n\n", cidade,estado,populacao1);
    break;
    case 2:
    printf("Comparacao de area !\n");
    printf("Carta 1 - (%s)%s area:%2fkm²\n\n", cidade,estado,area);
    break;
    case 3:
    printf("Comparacao de ponto turitico !\n");
    printf("Carta 1 - (%s)%s - pontos turistico :%d\n\n", cidade,estado,pontosturistico);
    break;
    case 4:
    printf("Comparacao de PIB ! \n" );
    printf("Carta 1 - (%s)%s - PIB :%2f\n\n", cidade,estado,Pib);
    break;
    default:
  printf(" **opcao ivalida **\n");
  }

        // ** MENU INTERATIVO **// 
      // OPCAO DE MENU CARTA 2 //

  printf("* ESCOLHA UM ATRIBUTO PARA COMPARAÇÃO (NAO PODE SER O MESMO): *\n");
  printf("1[]- populacao \n");
  printf("2[]- area \n");
  printf("3[]- numeros de pontos turisticos \n");
  printf("4[]- PIB  \n");

  printf("digite a opcao desejada: ");
  scanf("%d", &opcao2);
   if(opcao2 == opcao1){
    printf("\n");
    printf("=== *NAO PODE SER O MESMO ATRIBUTO* === Tente Novamente!\n");
}
  printf("\n");
switch (opcao2)
{
case 1:
  printf("Comparacao de Populacao !\n" );
  printf("Carta 2 - (%s)%s - habitantes :%d\n\n", cidade2,estado2,populacao2);
  break;
  case 2:
  printf("Comparacao de area !\n");
  printf("Carta 2 - (%s)%s area:%2fkm²\n\n", cidade2,estado2,area2);
  break;
  case 3:
  printf("Comparacao de ponto turitico !\n");
  printf("Carta 2 - (%s)%s - pontos turistico :%d\n\n", cidade2,estado2,pontosturistico2);
  break;
  case 4:
  printf("Comparacao de PIB ! \n" );
  printf("Carta 2 - (%s)%s - PIB :%2f\n\n", cidade2,estado2,Pib2);
  break;
default:
  printf(" **opcao ivalida **\n");
  break;
}

////Comparação de (Atributo: OPÇÃO 1)////
if(opcao1 == 1){
  printf("1. População:\n");
  printf("Carta 1: %d populacao\n", populacao1);
}else if(opcao1 == 2){
  printf("1. Área:\n");
  printf("Carta 1: %2fkm²\n", area);
}else if(opcao1 == 3){
  printf("1. Números de pontos turísticos:\n");
  printf("Carta 1: %d pontos turisticos\n", pontosturistico);
}else if (opcao1 == 4){
  printf("1.PIB:\n");
  printf("Carta 1: %2f PIB \n", Pib);
}

////Comparação de (Atributo: OPÇÃO 2)////
if(opcao2 == 1){
  printf("2. População:\n");
  printf("Carta 2: %d populacao\n", populacao2);
}else if(opcao2 == 2){
  printf("2. Área:\n");
  printf("Carta 2: %2fkm²\n", area2);
}else if(opcao2 == 3){
  printf("2. Números de pontos turísticos:\n");
  printf("Carta 2: %d pontos turisticos\n", pontosturistico2);
}else if (opcao2 == 4){
  printf("2.PIB:\n");
  printf("Carta 2: %2f PIB\n", Pib2);

}

  //Resultado final//  
  printf("\n====Resultado Final====\n");
if(opcao1 > opcao2){
    printf("\nResultado final: Carta 1 venceu a rodada\n");   
}else if(opcao1 < opcao2){
    printf("\nResultado final: Carta 2 venceu a rodada\n");
  }else if(opcao1 == opcao2){
    printf("\nResultado final: Empate!!\n");
  }
  
{
      
        return 0;
    }
    }
    
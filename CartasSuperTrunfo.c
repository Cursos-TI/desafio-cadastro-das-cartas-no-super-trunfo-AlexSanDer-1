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

    //Atributos referente a carta 1 do Usuario
    char estado;
    char codigoCarta[50];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

//Atributos referente a carta 2 do Usuario
    char estado_2;
    char codigoCarta_2[50];
    char nomeCidade_2[50];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontos_turisticos_2;


//Interação com usuario,para cadastrar dados da carta 1
   printf("Digite estado da carta: ");
   scanf(" %c", &estado);

   printf("Digite codigo da carta: ");
   scanf("%s",&codigoCarta);
   getchar();  // limpa /n deixado pelo scanf
    
   printf("Digite nome da cidade: ");
   fgets(nomeCidade,sizeof(nomeCidade),stdin);  //Lê uma linha inteira,inclusive com espaços

   printf("Digite o numero de habitantes da cidade: ");
   scanf("%d",&populacao);

   printf("Digite area  da cidade em quilômetros: ");
   scanf("%f",&area);

   printf("Digite produto interno bruto da cidade: ");
   scanf("%f",&pib);

   printf("Digite pontos turisticos: ");
   scanf("%d",&pontos_turisticos);
  

//Interação com usuario,para cadastrar dados da carta 2
   printf("----------------------------\n");

   printf("Digite estado da carta: ");
   scanf(" %c", & estado_2);

   printf("Digite codigo da carta: ");
   scanf("%s",&codigoCarta_2);
   getchar();  // limpa /n deixado pelo scanf

   printf("Digite nome da cidade: ");
   fgets(nomeCidade_2,sizeof(nomeCidade_2),stdin);  //Lê uma linha inteira,inclusive com espaços 
   
   printf("Digite o numero de habitantes da cidade: ");
   scanf("%d",&populacao_2);

   printf("Digite area  da cidade em quilômetros: ");
   scanf("%f",&area_2);

   printf("Digite produto interno bruto da cidade: ");
   scanf("%f",&pib_2);

   printf("Digite pontos turisticos: ");
   scanf("%d",&pontos_turisticos_2);


//Leitura dos dados fornecidos da carta 1
   printf("----------------------------\n");
   printf("Carta 1 \n");
   printf("Código: %c%s \n",estado,codigoCarta);
   printf("Nome da cidade: %s",nomeCidade);
   printf("População: %d\n",populacao);
   printf("Area: %.2f km \n",area);
   printf("PIB: %.2f\n",pib_2);
   printf("Número de Pontos turisticos: %d \n",pontos_turisticos);


//Leitura dos dados fornecidos da carta 2
   printf("----------------------------\n");
   printf("Carta 2 \n");
   printf("Código: %c%s \n",estado_2,codigoCarta_2);
   printf("Nome da cidade: %s",nomeCidade_2);
   printf("População: %d\n",populacao_2);
   printf("Area: %.2f km \n",area_2);
   printf("PIB: %.2f\n",pib_2);
   printf("Número de Pontos turisticos: %d \n",pontos_turisticos_2);

    return 0;
}

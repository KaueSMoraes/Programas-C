#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

#define TAM 30



struct dataUser{
    char nome[TAM];
    int idade;
    char endereco[100];
    char sexo;
    float peso;
};

typedef struct dataUser dataUser;

int main(){
setlocale(LC_ALL,"Portuguese");

dataUser lista_pessoa[TAM];
int i, n;
int posicao;

system("color a");
printf("Digite a quantidade de pessoas que vão ser preenchidas: ");
scanf("%d", &n);
fflush(stdin);

//Estrutura repetitiva para imputar os dados da pessoa e armazenar numa base de dados
    for(i=0;i<n;i++){
        printf("\n");
        printf("Nome(%d): ", i+1);
        fgets(lista_pessoa[i].nome,TAM, stdin);
        printf("Idade(%d): ", i+1);
        scanf("%d", &lista_pessoa[i].idade);
        fflush(stdin);
        printf("Endereço(%d): ", i+1);
        fgets(lista_pessoa[i].endereco,100,stdin);
        printf("Sexo(%d)(M ou F): ", i+1);
        scanf("%c", &lista_pessoa[i].sexo);
        fflush(stdin);
        printf("Peso(%d): ", i+1);
        scanf("%f", &lista_pessoa[i].peso);
        fflush(stdin);
    }
i=0;

//Limpando prompt para exibição de LOG
system("cls");


//Listando as pessoas digitadas
printf("Lista de Pessoas digitadas: \n");
    for(i=0;i<n;i++){
        printf("(%d)",i+1);
        puts(lista_pessoa[i].nome);
    }

printf("Deseja ver o dado de qual pessoa? Digite o número da posição: ");
scanf("%d", &posicao);

while(posicao>0){
    printf("Nome: ");
    puts(lista_pessoa[posicao+1].nome);
    printf("Idade: %d", lista_pessoa[posicao+1].idade);
    printf("Endereço: ");
    puts(lista_pessoa[posicao+1].endereco);
    printf("Sexo: %c", lista_pessoa[posicao+1].sexo);
    printf("Peso: %f", lista_pessoa[posicao+1].peso);
    printf("\n \n");
    printf("Ainda deseja ver os dados de alguma pessoa?Se sim digite abaixo o número da posicao, se não digite 0.\n");
    scanf(posicao);
}

return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


#define TAM 30

struct user_id{
    char nome[TAM];
    int idade;
    float peso;
};

typedef struct user_id user_id;

int main (){
setlocale(LC_ALL, "Portuguese");


printf ("Esse programa em serviço de windows é responsável por emitir um log de dados inseridos numa estrutura de dados de clientes, afim de fornecer contéudos para análise de dados.\n");

//Atribuindo valores aos campos da estrutura de dados user_id//

user_id  tokenID = {"Teste", 0, 0.0};

printf ("Inicio: \n");
printf("Nome : %s\n", tokenID.nome);
printf("Idade: %d\n", tokenID.idade);
printf("Peso: %.2f\n", tokenID.peso);

//Atribuido valores via código fonte dessa estrutura de dados//
printf("\n Alterando campos via código \n");

strcpy(tokenID.nome, "Kaue Santos de Moraes");
tokenID.idade = 15;
tokenID.peso = 70.5;

puts(tokenID.nome);
printf ("Idade: %d\n", tokenID.idade);
printf("Peso: %.2f\n \n", tokenID.peso);

//Imput de campos pelo usuário

printf ("Digite o nome da pessoa: ");
fgets(tokenID.nome,30,stdin);
printf("Digite a idade: ");
scanf("%d", &tokenID.idade);
printf("Digite o peso: ");
scanf("%.2f", &tokenID.peso);

system("cls");

printf ("-----------LOG----------- \n");
printf ("Pessoa: ");
puts(tokenID.nome);
printf("Idade: %d \n", tokenID.idade);
printf("Peso: %.2f \n", tokenID.peso);

return 0;
}
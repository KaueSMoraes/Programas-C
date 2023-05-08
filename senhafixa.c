#include <stdio.h>


int main(){

int senha;

printf("DIGITE A SENHA: ");
scanf("%d", &senha);

    while (senha != 2002){
        printf ("Senha invalida, tente novamente: ");
        scanf("%d", &senha);
    }
printf("ACESSO PERMITIDO");
 return 0;
}
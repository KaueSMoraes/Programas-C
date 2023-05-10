//Trabalhando com listas encadeadas em C
//Autor : Kauê Santos de Moraes

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


struct estrutura_Lista{
    int x;
    int y;
    struct _lista *prox;
};

typedef struct estrutura_Lista estruturalista;

estruturalista *primeirodalista;

void add_lista(int x, int y){    
    
    estruturalista *lista = malloc((estruturalista*)sizeof(estruturalista));
        if (malloc==NULL){
            printf("Sem espaço na memória RAM...\n");
            exit(1);
        } 
    lista->x = x;
    lista->y = y;
    lista->prox = primeirodalista;
    primeirodalista = lista;
};

int main(){


int x, y;
int res;

do{
    printf ("Boa tarde, voce esta prestes a criar uma lista encadeada que recebe dois valores. Para isso, por favor insira dois valores: \n");
    scanf("%d", &x);
    scanf ("%d", &y);

    add_lista(x,y);
    printf ("Deseja criar outra lista? Digite '1' para não e '0' para sim.\n");
    scanf ("%d", &res);
}while(res==0);

printf("Exibindo a primeira lista:");    
printf ("%d\n%d", primeirodalista->x, primeirodalista->y);
}
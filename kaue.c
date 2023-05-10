#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//TENTAAAAAAAAAAAAAANDO ENTEEEEEEEEEEEEEEENDEEEEEEEEEEER ESTRUTURA DE DADOS


struct lista_original{
    int x;
    int y;
    int z;
    struct lista_original *prox;
};

//Definindo um novo nome para a estrutura de lista.
typedef struct lista_original _Lista;

_Lista *primeirodalista;

void add(int x, int y, int z){
_Lista *lista = malloc ((_Lista*)sizeof(_Lista));
lista->x = x;
lista->y = y;
lista->z = z;
lista->prox = primeirodalista;
primeirodalista = lista;
};

void imprime_lista(){

    _Lista *auxlista = primeirodalista;

    while(auxlista!=NULL){
        printf("\n %d, %d, %d. \n", auxlista->x,auxlista->y,auxlista->z);
        auxlista = auxlista->prox;
    }
};

int main (){
    setlocale(LC_ALL, "Portuguese");
    system("color a");

    int x, y, z;
    int res;

        printf("Bom dia Você está prestes a digitar uma sequencia de listas encadeadas, e no final irá listas essa listas.");

        do{
            printf ("Digite três valores para a lista, x, y, z: \n");
            scanf("%d", &x);
            scanf("%d", &y);
            scanf("%d", &z);
            add(x,y,z);

            printf("Deseja digitar mais uma lista?Digite 1 para sim e 2 para não: \n");
            scanf("%d", &res);
        }while(res==1);

        printf ("------------ LOG DA SUAS LISTAS---------------\n");
        imprime_lista();
 return 0;
}
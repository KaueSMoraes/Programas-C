#include <stdio.h>




int main(){

int x = 0;
int y = 1;

    while( x != y){
        printf("Digite dois valores\n");
        scanf("%i\n",&x);
        scanf("%i",&y);

            if (x < y){
            printf ("CRESCENTE \n");
            }else if (x > y){
            printf ("DESCRESENTE \n");
            }
    }
    printf ("DIGITOU VALORES IGUAIS, FIM DA EXECUCAO.");    
}
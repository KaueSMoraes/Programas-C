#include <stdio.h>
#include <locale.h>



int main(){
setlocale(LC_ALL, "Portuguese");

int i = 0;
int j = 0;
int ordem = 0;
int matriz[10][10];
int cont_neg = 0;
int vetor_diagonal[10];

printf("Digite a ordem da matriz (Tem que ser uma matriz quadrada): ");
scanf("%d", &ordem);
fflush(stdin);

    
    for (i=0;i<ordem;i++){
        for(j=0;j<ordem;j++){

            printf("Elemento [%d, %d]: ",i, j);
            scanf("%d", &matriz[i][j]);

                if(matriz[i][j] < 0){
                    cont_neg ++;
                }

                if(i==j){
                    vetor_diagonal[i] = matriz[i][j];
                }
        }
    }

    printf("DIAGONAL PRINCIPAL: \n");
    
    for(i=0;i<ordem; i++){
        printf("%d ", vetor_diagonal[i]);
    }
    printf("\n");
    printf("QUANTIDADE DE NEGATIVOS: %d", cont_neg);

return 0;
}
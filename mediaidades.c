#include <stdio.h>




int main (){

int idade = 0;
float media = 0;
int cont_idade = 0;
int soma_idade = 0;


printf ("Digite as idades:\n");
scanf("%d", &idade);

        while(idade> 0){
        soma_idade = soma_idade + idade;
        cont_idade ++;
        scanf("%d", &idade);
        }
            if (cont_idade == 0){
                printf ("IMPOSSÍVEL CALCULAR");
            }else{
                media = (float)soma_idade / cont_idade;    
                printf ("MEDIA: %f ", media); 
            }
return 0;
}




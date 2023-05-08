#include <stdio.h>




int main(){

int num;
int cont_alcool = 0, cont_gasolina = 0, cont_diesel = 0;


do{
printf("Informe um codigo(1,2 ou 3) ou 4 para parar: ");
scanf ("%d", &num);
    if (num == 1){
        cont_alcool++;
    }else if (num == 2){
        cont_gasolina++;
    }else if (num == 3){
        cont_diesel++; 
    }
}while(num!=4);
printf ("MUITO OBRIGADO \n");
printf ("Alcool: %d \n", cont_alcool);
printf ("Gasolina: %d \n", cont_gasolina);
printf ("Dielsel: %d \n", cont_diesel);
return 0;
}
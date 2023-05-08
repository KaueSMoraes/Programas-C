#include <stdio.h>



int main(){

int n, i; 
float valores[10];
float soma = 0;
float media;

printf ("Quantos valores voce vai digitar: ");
scanf ("%d", &n);

for(i=0; i<= n-1; i++){

    printf ("Digite um numero: ");
    scanf ("%f", &valores[i]);
    soma += valores[i];
}

media = soma / n;

printf ("VALORES: ");
for(i=0; i<= n-1; i++){
    printf ("%.2f ", valores[i]);
    if(i == n-1){
        printf ("\n");
    }    
}

printf ("SOMA: %.2f \n", soma);
printf ("MEDIA: %.2f", media);

return 0;
}

#include <stdio.h>



int main (){

int vet1[10];
int vet2[10];
int n, i;


printf("Quantos numeros voce vai digitar: ");
scanf("%d", &n);

for(i=0; i<n; i++){
    printf ("Digite um numero: ");
    scanf ("%d", &vet1[i]);
    
    if(vet1[i] < 0){
        vet2[i] = vet1[i];        
    }
}

printf("NUMEROS NEGATIVOS \n");

for(i=0; i < n ; i++){
    if (vet2[i] < 0){
        printf ("%d \n", vet2[i]);
    }
}
return 0;
}
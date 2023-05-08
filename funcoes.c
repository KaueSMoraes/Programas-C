#include <stdio.h>

float maior(float num1, float num2){

    if(num1>num2){
        return num1;
    }else
        return num2;
}


int main(){

float x, y, m;

printf("Digite o primeiro numero:\n");
scanf("%f", &x);

printf("Digite o segundo numero: \n");
scanf("%f", &y);

m = maior(x,y);

printf ("MAIOR VALOR: %.2f", m);

return 0;
}
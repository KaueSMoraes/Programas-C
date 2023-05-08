#include <stdio.h>



int main(){

int n = 0;
int i =0;
int resultado = 0;

printf ("Deseja a tabuada para qual valor: ");
scanf ("%d", &n);

for(i = 1; i < 11; i++)
{
resultado = n * i;
printf ("%d X %d = %d \n", n, i, resultado);
}
return 0;
}
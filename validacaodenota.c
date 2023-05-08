#include <stdio.h>




int main(){

float nota1, nota2, media;

printf("Digite a primeira nota: ");
scanf("%f", &nota1);
    while(nota1<0 || nota1>10){
        printf ("Nota Invalida, digite novamente");
        scanf("%f", &nota1);
    }
printf("Digite a segunda nota: ");
scanf("%f", &nota2);
    while(nota2<0 || nota2>10){
        printf ("Nota Invalida, digite novamente");
        scanf("%f", &nota2);
    }
    media = (nota1 + nota2) / 2;
    printf("MEDIA: %.2f", media);
return 0;
}
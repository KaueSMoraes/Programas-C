#include <stdio.h>
#include <locale.h>



struct horario{
    int hora;
    int minutos;
    int segundos;
};
typedef struct horario horario;

int main(){

    horario hora_composta;

    printf("Digite a hora: ");
    scanf("%d", &hora_composta.hora);
    printf ("Digite os minutos: ");
    scanf("%d", &hora_composta.minutos);
    printf("Digite os segundos: ");
    scanf("%d", &hora_composta.segundos);

    printf("HORA: %dh%dmin%ds", hora_composta.hora, hora_composta.minutos, hora_composta.segundos);

    return 0;
}
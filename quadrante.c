#include <stdio.h>


int main(){

int x ;
int y ;

printf ("Digite as coordenadas X e Y : \n");
scanf("%i", &x);
scanf ("%i", &y);

do{
     if (x>0 && y>0){
            printf ("QUADRANTE Q1 \n");
                }else if (x>0 && y<0){
                    printf ("QUADRANTE Q2 \n");
                        }else if (x<0 && y<0){
                            printf ("QUADRANTE Q3 \n");
                                }else {
                                printf ("QUADRANTE Q4 \n");
                            
        }
    printf ("Digite as coordenadas X e Y : \n");
    scanf("%i", &x);
    scanf ("%i", &y);
}while(x!=0 && y!=0);          

return 0;
}
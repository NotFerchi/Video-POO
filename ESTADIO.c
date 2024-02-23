#include <stdio.h>
#include <locale.h>

/*Instrucciones
Se pide construir un programa que permita seleccionar un sector del estadio,
ingresar la cantidad de entradas solicitadas y calcular el total a pagar
por las entradas.*/

int main() {
    setlocale(LC_ALL,"");
    int s, e, c;

    printf("*****ESTADIO__CUSCATL�N*****\n");
    printf("\n Sector                        Costo de la entrada\n");
    printf("\n 1) Sol general                    $4");
    printf("\n 2) Sol preferente                 $5");
    printf("\n 3) Sombra                         $8");
    printf("\n 4) Tribuna                        $15");
    printf("\n 5) Platea                         $20");
    printf("\n\n 0) SALIR");

    printf("\n\nIngrese el n�mero del sector que desea adquirir: ");
    scanf(" %d", &s);
while (s>5 || s<0){
printf("\nEl n�mero ingresado es invalido.\n");
printf("\nIngrese el n�mero del sector que desea adquirir: ");
         scanf(" %d", &s);
}

    switch(s){
        case 1:
            printf("\n�Cu�ntos boletos desea adquirir en Sol general? ");
            scanf(" %d", &e);
            while (e<1){
                printf("\nEl n�mero ingresado es invalido.\n");
                printf("\n�Cu�ntos boletos desea adquirir en Sol general? ");
                scanf(" %d", &e);
            }
            c=e*3;
            printf("\nTotal a pagar: $%d\n",c);
            break;
        case 2:
            printf("\n�Cu�ntos boletos desea adquirir en Sol preferente? ");
            scanf(" %d", &e);
            while (e<1){
                printf("\nEl n�mero ingresado es invalido.\n");
                printf("\n�Cu�ntos boletos desea adquirir en Sol preferente? ");
                scanf(" %d", &e);
            }
            c=e*5;
            printf("\nTotal a pagar: $%d\n",c);
            break;
        case 3:
            printf("\n�Cu�ntos boletos desea adquirir en Sombra? ");
            scanf(" %d", &e);
            while (e<1){
                printf("\nEl n�mero ingresado es invalido.\n");
                printf("\n�Cu�ntos boletos desea adquirir en Sombra? ");
                scanf(" %d", &e);
            }
            c=e*8;
            printf("\nTotal a pagar: $%d\n",c);
            break;
        case 4:
            printf("\n�Cu�ntos boletos desea adquirir en Tribuna? ");
            scanf(" %d", &e);
            while (e<1){
                printf("\nEl n�mero ingresado es invalido.\n");
                printf("\n�Cu�ntos boletos desea adquirir en Tribuna? ");
                scanf(" %d", &e);
            }
            c=e*15;
            printf("\nTotal a pagar: $%d\n",c);
            break;
        case 5:
            printf("\n�Cu�ntos boletos desea adquirir en Platea? ");
            scanf(" %d", &e);
            while (e<1){
                printf("\nEl n�mero ingresado es invalido.\n");
                printf("\n�Cu�ntos boletos desea adquirir en Platea? ");
                scanf(" %d", &e);
            }
            c=e*20;
            printf("\nTotal a pagar: $%d\n",c);
            break;
        case 0:
            printf("\nHa salido del programa\n",e);
            break;
    }

    return 0;
}
//FERNANDO VILLAFUERTE FERREYRA

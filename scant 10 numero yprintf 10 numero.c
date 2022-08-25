#include <stdio.h>

int main(){

    int b;
    int i;
    int n;
    int a[ b ];
    int buffer;
    int change;

    printf("¿Imgrese la cantidad de numero? ");
    scanf("%d", &b);
    printf("\n");

    for(i = 1; i <= b; i++){

        if (b < 2){

            printf("\nDebe ingresar al menos 2 numeros.");

            return 0;
        }

        else{

            printf("Ingrese un numuero: ");
            scanf("%d", &n);

            a[b] = n;
        }
    }

    for(i = 0; i < b; i++){


        printf("\nEl valor actual de a[%d] es: %d", i, n);

    }


    return 0;
}

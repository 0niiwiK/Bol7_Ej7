#include <stdio.h>

int main() {
    int num,cont_menor15=0,cont_mayor50=0,cont_entre45y55=0;
    for (int i = 1; i <= 100; i++) {
        printf("Introduce el natural %d: ",i);
        scanf("%d",&num);
        fflush(stdin);
        while (num<0){
            printf("Numero invalido, introduce de nuevo el natural %d: ",i);
            scanf("%d",&num);
            fflush(stdin);
        }
        if (num<15)
            cont_menor15++;
        else if (num>50)
            cont_mayor50++;
        if (num>=45 && num<=55)
            cont_entre45y55++;
    }
    printf("\nNumeros menores de 15: %d",cont_menor15);
    printf("\nNumeros mayores de 50: %d",cont_mayor50);
    printf("\nNumeros entre 45 y 55: %d",cont_entre45y55);
    return 0;
}

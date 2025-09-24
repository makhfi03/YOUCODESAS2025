#include <stdio.h>
#include <stdlib.h>

int main() {
    int nombre;

    printf("Entrer un nombre:");
    scanf("%d", &nombre);

    if(nombre%2==0){
        printf("ce nombre est pair");
    }else{
    printf("ce nombre est impaire");
    }

    return 0;
}

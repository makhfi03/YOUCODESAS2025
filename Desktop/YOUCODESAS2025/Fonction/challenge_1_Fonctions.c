#include <stdio.h>
#include <stdlib.h>


int Somme(int a,int b){
     printf("Votre resultat est: %d",a+b);
 }

int main(){
    int x,y;
    printf("Entrer deux nombres positifs: ");
    scanf("%d",&x);
    scanf("%d", &y);

    Somme(x,y);

}


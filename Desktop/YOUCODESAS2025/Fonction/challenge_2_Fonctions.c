#include <stdio.h>
#include <stdlib.h>


int Multipl(int a,int b){
     printf("Votre resultat est: %d",a*b);
 }

int main(){
    int x,y;
    printf("Entrer deux nombres positifs: ");
    scanf("%d",&x);
    scanf("%d", &y);

    Multipl(x,y);

}



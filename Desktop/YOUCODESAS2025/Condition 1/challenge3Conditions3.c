#include <stdio.h>
#include <stdlib.h>

int main(){

int S, a, b;

printf("Entrer deux nombres entieres a et b:");
scanf("%d", &a);
scanf("%d", &b);

S=a+b;

if(a==b){
    printf("Le triple est: %d, et la somme est: %d", a*b, S);
}else{
printf("La somme est: %d", S);
}

return 0;
}

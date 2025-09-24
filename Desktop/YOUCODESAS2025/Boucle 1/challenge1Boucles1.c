#include <stdio.h>
#include <stdlib.h>

int main(){
int n, i, m;
printf("Entrer un nbre entier positive: ");
scanf("%d",&n);
for(i=1; i<=10; i++){
    m=n*i;
    printf("%d*%d=%d\n",n,i,m);
}

}


#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, b, c, d;

   printf("Entrer 4 chiffres entiere successivement\n");
   printf("a:");
   scanf("%d", &a);
   printf("b:");
   scanf("%d", &b);
   printf("c:");
   scanf("%d", &c);
   printf("d:");
   scanf("%d", &d);

   printf("l'inverse du nombre %d%d%d%d est: %d%d%d%d ", a,b,c,d,d,c,b,a);

   return 0;
}

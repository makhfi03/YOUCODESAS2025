#include <stdio.h>
#include <stdlib.h>

int main(){

char voyelle;

printf("Entrer une lettre: ");
scanf("%s", &voyelle);
switch(voyelle){
    case 'a':
        printf("Est une voyelle");
        break;
    case 'e':
        printf("Est une voyelle");
        break;
    case 'o':
        printf("Est une voyelle");
        break;
    case 'y':
        printf("Est une voyelle");
        break;
    case 'u':
        printf("Est une voyelle");
        break;
    case 'i':
        printf("Est une voyelle");
        break;
    default:
        printf("N'est pas une voyelle");
        break;
    }

return 0;

}

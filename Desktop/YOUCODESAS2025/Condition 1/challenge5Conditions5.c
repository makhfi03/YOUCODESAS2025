#include <stdio.h>
#include <stdlib.h>

int main(){

    int annee, choix;

    printf("Entrer une annee\n");
    scanf("%d", &annee);
printf("--- Menu --- \n");
printf("1.Convertir en Mois\n");
printf("2.Convertir en Jours\n");
printf("3.Convertir en Heures\n");
printf("4.Convertir en Minutes\n");
printf("5.Convertir en Secondes\n");
printf("Choix:");
scanf("%d", &choix);
switch(choix){
    case 1:
    printf("Mois %d:", annee * 12);
    break;
    case 2:
    printf("Jours %d:", annee*365);
    break;
    case 3:
    printf("Heures %d:",annee*365*24);
    break;
    case 4:
    printf("Minutes %d:",annee*365*24*60);
    break;
    case 5:
    printf("Secondes %d:",annee*365*24*60*60);
    break;
    default:
    printf("erreur");
    break;
}
return 0;
}

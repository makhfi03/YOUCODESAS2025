#include <stdio.h>
#include <stdlib.h>

void Ajouter(){

    char nom[50], telephone[50];
    int i, j, n;

    printf("Entrer le nombre de contact a ajouter: ");
    scanf("%d", &n);
    printf("Entrer votre nom: ");
    scanf("%s",nom);
    printf("Entrer votre numero de telephone: ");
    scanf("%s",telephone);

    return 'nom'+'telephone';
}

void Afficher(){
    char nom[50], telephone[50];
    printf("%s: %s", nom, telephone);

}









int main(){

char T[50][50];
int i, j, choix;

do{
    printf("----- Menu -----\n");
    printf("1.Ajouter un contact.\n");
    printf("2.Afficher tous les contacts.\n");
    printf("3.Rechercher un contact par son nom.\n");
    printf("4.Supprimer un contact par son nom.\n");
    printf("5.Quitter.\n");
    printf("Choix:");
    scanf("%d", &choix);

    switch(choix){
case 1:
    Ajouter();
    break;
case 2:
    Afficher();
    break;
case 3:

    break;
case 4:

    break;
case 5:

    break;
    }
}while(choix<5 && choix>0);
}


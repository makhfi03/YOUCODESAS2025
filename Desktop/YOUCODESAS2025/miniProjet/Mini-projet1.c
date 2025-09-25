#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Contact{

    char nom[50];
    int tele;

}contact;


int main(){
int i, nombre, choix, trouve;
char rechercher[50];

contact c1[50];

do{
    printf("\n\n----- Menu -----\n");
    printf("1.Ajouter un contact.\n");
    printf("2.Afficher tous les contacts.\n");
    printf("3.Rechercher un contact par son nom.\n");
    printf("4.Supprimer un contact par son nom.\n");
    printf("5.Quitter.\n");
    printf("Choix:");
    scanf("%d", &choix);


    switch(choix){
case 1:
    printf("Entrer combien de contact vous voulez ajouter: ");
    scanf("%d", &nombre);
    for(i=0; i<nombre; i++){
        printf("Entrer le nom: ");
        scanf("%s",&c1[i].nom);
        printf("Entrer le numero de telephone: 0");
        scanf("%d",&c1[i].tele);
    }
    break;
case 2:
    printf("Vous avez %d contacts, sont comme suit:\n", nombre);
    for(i=0; i<nombre; i++){
        printf("\nContact %d:\n", i+1);
        printf("%s:  %d ", c1[i].nom, c1[i].tele);
    }
    break;
case 3:
    printf("Entrer le nom du contact pour rechercher: ");
    scanf("%s",rechercher);

    for(i=0; i<nombre; i++){
        if(strcmp(rechercher, c1[i].nom) == 0){
            printf("Voici le contact rechercher: %s: %d", c1[i].nom, c1[i].tele);
            break;
        }
    }
    break;
case 4:

    break;
case 5:
    printf("Au revoir!");
    break;
default:
    printf("Erreur");
    break;
    }
}while(choix<5 && choix>0);
}


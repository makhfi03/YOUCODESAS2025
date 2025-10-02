#include <stdio.h>
#include <stdlib.h>
#include "FonctionsSas2.c"



int main(){

    int choix=0;
    char nomRechercher[50];
    char nomProduit[50];
    char produitSelect[50];
    initialisationCatalogue();


    do{
        printf("-----SYSTEME D'ACHAT CLIENT-----\n\n");
        printf("1.Gestion du profil client.\n");
        printf("2.Gestion du solde virtuel.\n");
        printf("3.Consultation des produits.\n");
        printf("4.Effectuer un achat.\n");
        printf("5.Mes statistiques.\n");
        printf("0.Quitter l'application.\n");
        printf("Votre choix: ");
        scanf("%d", &choix);

        switch(choix){
    case 1:
        do{
        printf("\n---Gestion du Profil Client---\n");
        printf("1.Creation de profil.\n");
        printf("2.Modification du profil.\n");
        printf("3.Consultation du profil.\n");
        printf("4.Retour au menu principal.\n");
        printf("Votre choix: ");
        scanf("%d", &choix);
        switch(choix){
        case 1:
            creerProfil();
            break;
        case 2:
            modifierProfil();
            break;
        case 3:
            afficherProfil();
            break;
        }
        }while(choix<4 && choix>0);
        break;

    case 2:
        do{
        printf("\n---Gestion du Solde Virtuel---\n");
        printf("1.Consulter mon solde\n");
        printf("2.Deposer de l'argent\n");
        printf("3.Retour au menu principal\n");
        printf("Votre choix: ");
        scanf("%d", &choix);
        switch(choix){
        case 1:
            consulterSolde();
            break;
        case 2:
            deposerArgent();
            break;
        }
        }while(choix<3 && choix>0);
        break;

    case 3:
        do{
        printf("\n---Catalogue des Produits---\n");
        printf("1.Afficher tous les produits\n");
        printf("2.Rechercher un produit par nom\n");
        printf("3.Rechercher par categorie\n");
        printf("4.Trier les produits par nom\n");
        printf("5.Trier les produits par prix decroissant\n");
        printf("6.Trier les produits par prix croissant\n");
        printf("7.Retour au menu principal\n");
        printf("Votre choix: ");
        scanf("%d", &choix);
        switch(choix){
        case 1:
            afficherCatalogue();
            break;
        case 2:
            rechercherProduitParNom(nomRechercher);
            break;
        case 3:
            rechercherProduitParCategorie(nomRechercher);
            break;
        case 4:
            trierProduitsNom();
            break;
        case 5:
            trierProduitsPrixDecroissant();
            break;
        case 6:
            trierProduitsPrixCcroissant();
            break;
        case 7:
            printf("%d", choix);
            break;
        }
        }while(choix<7 && choix>0);
        break;

    case 4:
        do{
        printf("\n---Effectuer un achat---\n");
        printf("1.Selection du produit\n");
        printf("2.Paiement\n");
        printf("3.Retour au menu principal\n");
        printf("Votre choix: ");
        scanf("%d", &choix);

        switch(choix){
        case 1:
            effectuerAchat(quantite);
        break;
        case 2:
            paiement(prixFinal);
            break;
            }
        }while(choix<3 && choix>0);
        break;

    case 5:
        do{
        printf("\n---Statistiques---\n");
        printf("1.Statistiques et historiques des achats\n");
        printf("2.Retour au menu principal\n");
        printf("Votre choix: ");
        scanf("%d", &choix);
        switch(choix){
        case 1:
            afficherStatistiques();
            break;
        }
        }while(choix<2 && choix>0);
        }
    }while(choix<=7 && choix>0);

}



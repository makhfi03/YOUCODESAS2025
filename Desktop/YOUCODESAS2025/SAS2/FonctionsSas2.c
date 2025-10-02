#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Sas2.h"


typedef struct{
    int idClient;
    char nom[50];
    char prenom[50];
    char email[50];
    float solde;
}Client;
Client c[2];
int idClient = 0;


typedef struct{
    int idProduit;
    char nom[50];
    char categorie[50];
    float prix;
    int stock;
    char description[100];
}Produit;
Produit p[4];
int idProduit = 0;

typedef struct {
    int jour;
    int mois;
    int annee;
} Date;
Date date;
int quantite=0;
int choix=0;
float prixFinal=0;
int historique[50][2];
int nbAchats = 0;

void creerProfil(){

    printf("Entrer votre nom: ");
    scanf("%s", c[idClient].nom);
    printf("Entrer votre prenom: ");
    scanf("%s", c[idClient].prenom);
    strcpy(c[idClient].email,c[idClient].prenom);
    strcat(c[idClient].email,".");
    strcat(c[idClient].email,c[idClient].nom);
    strcat(c[idClient].email,"@client.com");
    printf("Votre gmail est: %s\n", c[idClient].email);
    c[idClient].solde=0;
    idClient++;
}

void modifierProfil(){
      char quest;

    printf("Voulez vous vraiment modifier votre nom et prenom? y/n\n");
    scanf(" %c",&quest);
    if(quest=='y' || quest=='Y'){
    printf("Entrer un nouveau nom: ");
    scanf("%s", c[idClient-1].nom);
    printf("Entrer votre nouveau prenom: ");
    scanf("%s", c[idClient-1].prenom);
    strcpy(c[idClient-1].nom,c[idClient-1].nom);
    strcpy(c[idClient-1].prenom,c[idClient-1].prenom);
    strcpy(c[idClient-1].email,c[idClient-1].prenom);
    strcat(c[idClient-1].email,".");
    strcat(c[idClient-1].email,c[idClient-1].nom);
    strcat(c[idClient-1].email,"@client.com");
    printf("Votre nouveau nom et prenom: %s %s\n", c[idClient-1].nom, c[idClient-1].prenom);
    printf("Votre gmail est: %s\n", c[idClient-1].email);
    printf("Succee!");
    }
    else if(quest=='n' || quest=='N'){
        printf("Modification annuler.");
    }
    else {
        printf("Choix non disponible!!!");
    }
}

void afficherProfil(){
    printf("Votre ID: %d\n", c[idClient-1].idClient);
    printf("Votre Nom: %s\n", c[idClient-1].nom);
    printf("Votre Prenom: %s\n", c[idClient-1].prenom);
    printf("Votre Email: %s\n", c[idClient-1].email);
    printf("Votre Solde: %.2f MAD", c[idClient-1].solde);
}

void consulterSolde(){
    printf("Votre Solde: %.2f MAD", c[idClient-1].solde);
}

void deposerArgent(){
    c[idClient-1].solde=500.00;
    printf("Votre Solde: %.2f MAD", c[idClient-1].solde);
}


void initialisationCatalogue(){
    p[0].idProduit=1;
    strcpy(p[0].nom,"Ordinateur Portable");
    p[0].prix=799.00;
    p[0].stock=5;
    strcpy(p[0].categorie,"Appareil electronique");
    strcpy(p[0].description,"Ordinateur portable 15 pouces, 8GB RAM, 256GB SSD");
    p[1].idProduit=2;
    strcpy(p[1].nom,"Smartphone");
    p[1].prix=499.00;
    p[1].stock=10;
    strcpy(p[1].categorie,"Appareil electronique");
    strcpy(p[1].description,"Smartphone Android/iOS, ecran 6.1 pouces, 128GB stockage, appareil photo double capteur");
    p[2].idProduit=3;
    strcpy(p[2].nom,"Casque Audio");
    p[2].prix=89.00;
    p[2].stock=15;
    strcpy(p[2].categorie,"Appareil electronique");
    strcpy(p[2].description,"Casque audio over-ear, reduction de bruit, autonomie 20h, connexion Bluetooth");
    p[3].idProduit=4;
    strcpy(p[3].nom,"Chaise");
    p[3].prix=150.00;
    p[3].stock=20;
    strcpy(p[3].categorie,"Meuble");
    strcpy(p[3].description,"Chaise de bureau ergonomique, reglable en hauteur, dossier inclinable, tissu mesh");
    p[4].idProduit=5;
    strcpy(p[4].nom,"Etageres");
    p[4].prix=45.00;
    p[4].stock=12;
    strcpy(p[4].categorie,"Meuble");
    strcpy(p[4].description,"Etagere 5 niveaux, structure metallique, capacite 150kg, montage facile");
}

void afficherCatalogue(){

    for(int i=0; i<5; i++) {
        printf("%d. %s - %.2fMAD - Stock: %d\n",
               p[i].idProduit,
               p[i].nom,
               p[i].prix,
               p[i].stock);
    }
}

void rechercherProduitParNom(char nomRechercher[]){
    printf("Entrez le nom a rechercher: ");
    scanf(" %[^\n]", nomRechercher);
    getchar();
    printf("Resultat pour: %s\n", nomRechercher);

    int found=0;

    for(int i=0; i<5; i++){
        if(strcmp(p[i].nom,nomRechercher) == 0){
                found = 1;
            printf("Voici le produit rechercher en details: %d. %s:  %s - %.2fMAD - Stock: %d - Description: %s\n",
               p[i].idProduit,
               p[i].categorie,
               p[i].nom,
               p[i].prix,
               p[i].stock,
               p[i].description);
        }
}
    if(found == 0){
        printf("Nom produit invalide!\n");
        }
}

void rechercherProduitParCategorie(char nomRechercher[]){
    printf("Entrez la categorie a rechercher: ");
    scanf(" %[^\n]", nomRechercher);
    getchar();
    printf("Resultat pour: %s\n", nomRechercher);

    int found=0;

    for(int i=0; i<5; i++){
        if(strcmp(p[i].categorie,nomRechercher) == 0){
                found = 1;
            printf("Voici les produits dans la categorie rechercher: %d. %s - %.2fMAD - Stock: %d - Description: %s\n",
               p[i].idProduit,
               p[i].nom,
               p[i].prix,
               p[i].stock,
               p[i].description);
        }
}
    if(found == 0){
        printf("Nom categorie invalide!\n");
        }
}

void trierProduitsNom(){
    Produit temp;
    for (int i = 0; i < 5- 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (strcmp(p[j].nom, p[j + 1].nom) > 0) {
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
}

void trierProduitsPrixDecroissant(){
    Produit temp;
    for (int i = 0; i < 5- 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (p[j].prix < p[j + 1].prix) {
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
}

void trierProduitsPrixCcroissant(){
    Produit temp;
    for (int i = 0; i < 5- 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (p[j].prix > p[j + 1].prix) {
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
}


void effectuerAchat(int quantite){
    int choix;
    afficherCatalogue();
    printf("Choisit un produit: ");
    scanf("%d", &choix);
    printf("Nom produit: %s\n", p[choix-1].nom);

    switch(choix){
    case 1:
        printf("Donne moi la quantitee voulu: ");
        scanf(" %d", &quantite);
        verifierStock(choix,quantite);
        verifierSolde(choix, quantite);
        break;
    case 2:
        printf("Donne moi la quantitee voulu: ");
        scanf("%d", &quantite);
        verifierStock(choix,quantite);
        verifierSolde(choix, quantite);
        break;
    case 3:
        printf("Donne moi la quantitee voulu: ");
        scanf("%d", &quantite);
        verifierStock(choix,quantite);
        verifierSolde(choix, quantite);
        break;
    case 4:
        printf("Donne moi la quantitee voulu: ");
        scanf("%d", &quantite);
        printf("%d",quantite);
        verifierStock(choix,quantite);
        verifierSolde(choix, quantite);
        break;
    case 5:
        printf("Donne moi la quantitee voulu: ");
        scanf("%d", &quantite);
        verifierStock(choix,quantite);
        verifierSolde(choix, quantite);
        break;
    }

    ajouterAchatHistorique(p[choix-1].idProduit, quantite);

    printf("Achat ajouté à l'historique!\n");
}

void verifierStock(int choix, int quantite){
    if(p[choix-1].stock>=quantite){
        printf("Stock suffisant pour accuser cette action.\n");
    }else{
    printf("\n STOCK INSUFFISANT!");
    }
}

void verifierSolde(int choix, int quantite){
    prixFinal = p[choix-1].prix*quantite;
    if(c[idClient-1].solde >= prixFinal){
        printf("%.2f",prixFinal);
        printf("Solde suffisant.");
    }
    else{
        printf("Solde insuffisant pour accuser cette action!");
    }
}

void paiement(float prixFinal){
    c[idClient-1].solde = c[idClient-1].solde - prixFinal;
    printf("prixfinal: %.2f", prixFinal);
    printf("SUCCEE!!");
}

void ajouterAchatHistorique(int idProduit, int quantite) {
    if(nbAchats < 50) {
        historique[nbAchats][0] = idProduit;
        historique[nbAchats][1] = quantite;
        nbAchats++;
        printf("Nombre d'achat: ", nbAchats);
        printf("Achat ajoute a l'historique!\n");
    } else {
        printf("Historique plein!\n");
    }
}

void afficherHistorique() {
    if(nbAchats == 0) {
        printf("Historique vide.\n");
        return;
    }

    printf("\n---Historique des achats---\n");
    printf("| ID | Produit    | Quantite |\n");

    float totalDepense = 0;

    for(int i = 0; i < nbAchats; i++) {
        int idProduit = historique[i][0];
        int quantite = historique[i][1];
        for(int j = 0; j < 5; j++){
            if(p[j].idProduit == idProduit) {
                float prixTotal = p[j].prix * quantite;
                totalDepense += prixTotal;

                printf("| %d | %s     |    %d |\n",
                       idProduit, p[j].nom, quantite);
                break;
            }
        }
    }

    printf(" Total depense: %.2f MAD\n", totalDepense);
    printf(" Nombre total d'achats: %d\n", nbAchats);
}

void afficherStatistiques() {
    printf("\n---Mes statistiques---\n");
    printf("Nombre d'achats: %d\n", nbAchats);
    float total = 0;
    for(int i = 0; i < nbAchats; i++) {
        int idProduit = historique[i][0];
        int quantite = historique[i][1];
        for(int j = 0; j < 5; j++) {
            if(p[j].idProduit == idProduit) {
                total += p[j].prix * quantite;
                break;
            }
        }
    }
    printf("Total depense: %.2f MAD\n", total);
    char choix;
    printf("\nVoir l'historique detaille? (o/n): ");
    scanf(" %c", &choix);

    if(choix == 'o' || choix == 'O') {
        afficherHistorique();
    }
}

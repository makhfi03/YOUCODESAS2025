#ifndef Sas2_H
#define Sas2_H


void initialisationCatalogue();
void afficherCatalogue();
void creerProfil();
void modifierProfil();
void afficherProfil();
void consulterSolde();
void deposerArgent();
void rechercherProduitParNom(char nomRechercher[]);
void rechercherProduitParCategorie(char nomRechercher[]);
void trierProduitsNom();
void trierProduitsPrixDecroissant();
void trierProduitsPrixCroissant();
void effectuerAchat(int quantite);
void verifierStock(int choix, int quantite);
void verifierSolde(int choix, int quantite);
void paiement(float prixFinal);
void ajouterAchatHistorique(int idProduit, int quantite);
void afficherHistorique();
void afficherStatistiques();

#endif

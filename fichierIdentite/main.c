//appel des bibliothèques et des fichiers d'entête
#include <stdio.h>
#include <stdlib.h>
#include "vue.h"
#include "fichier.h"

//###########################################
//PROGRAMME fichierIdentite
//*****************************************************************************************************//
//
// DESCRIPTION Permet de renseigné, afficher, sauvegarde dans un fichier texte et récupérer de ce fichier des types tIdentité
//
// ENTREE / L'environnement
//
// SORTIE / Le texte correspondant aux affichages, le fichier texte.
//
// NOTE - Appel la fonction lectureIdentite
//*****************************************************************************************************//
int main()
{
    char cMenu;
    int nNbCarteIdentite;
    tIdentite stTabIdentite[NB_MAX_CARTE_IDENTITE];

    recuperationTabIdentite(FICHIER_TEXTE_CHEMIN,stTabIdentite,&nNbCarteIdentite);

    do{
        choixMenuPrincipal(&cMenu,"'s' : supprimer le fichier.\n'a': ajouter carte.\n'l': lire les cartes.\n'q' : quitter\n");
        switch(cMenu){
        case 's':
            supprimerFichier(FICHIER_TEXTE_CHEMIN);
            nNbCarteIdentite=0;
            break;
        case 'a':
            renseignementFicheIdentite(&(stTabIdentite[nNbCarteIdentite]));
            setId(&(stTabIdentite[nNbCarteIdentite]),nNbCarteIdentite);
            ajoutFichierTexte(FICHIER_TEXTE_CHEMIN,&(stTabIdentite[nNbCarteIdentite]));
            nNbCarteIdentite+=1;
            break;
        case 'l':
            lectureTabIdentite(stTabIdentite,nNbCarteIdentite);
            break;
        case 'q': break;
        default : printf("Erreur de saisie, veuillez recommencer !\n");
        }
    }while(cMenu!='q');

    return 0;
}

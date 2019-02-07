//appel des biblioth�ques et des fichiers d'ent�te
#include <stdio.h>
#include <stdlib.h>
#include "vue.h"
#include "fichier.h"

//###########################################
//PROGRAMME fichierIdentite
//*****************************************************************************************************//
//
// DESCRIPTION Permet de renseign�, afficher, sauvegarde dans un fichier texte et r�cup�rer de ce fichier des types tIdentit�
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
    int nNbCarteIdentite, nI=0;
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
            if(allocIdentite(&(stTabIdentite[nNbCarteIdentite]),TAILLE_CHAINE)){
                renseignementFicheIdentite(&(stTabIdentite[nNbCarteIdentite]));
                setId(&(stTabIdentite[nNbCarteIdentite]),nNbCarteIdentite);
                ajoutFichierTexte(FICHIER_TEXTE_CHEMIN,&(stTabIdentite[nNbCarteIdentite]));
                nNbCarteIdentite+=1;
            }else{
                printf("Echec de l'allocation m�moire.\n");
            }
            break;
        case 'l':
            lectureTabIdentite(stTabIdentite,nNbCarteIdentite);
            break;
        case 'q': break;
        default : printf("Erreur de saisie, veuillez recommencer !\n");
        }
    }while(cMenu!='q');

    //lib�re du tas toutes les carte d'identit�
    for(nI=0;nI<nNbCarteIdentite;nI++){
        freeIdentite(&(stTabIdentite[nI]));
    }
    return 0;
}

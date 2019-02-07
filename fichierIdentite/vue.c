#include "vue.h"


//###########################################
//PROCEDURE renseignementChaine
//*****************************************************************************************************//
//
// DESCRIPTION Demande  la saisie d'une chaine et renvoie la chiane saisie
//
// ENTREE / La chaine à renvoyé, la chaine correspondant à l'invite de saisie
//
// SORTIE /La chaine renvoyé
//
// NOTE -
//*****************************************************************************************************//
void renseignementChaine(char cChaine[TAILLE_CHAINE], const char cDemande[]){

    strcpy(cChaine,"");
    do{
        printf(cDemande);
        fflush(stdin);
        gets(cChaine);
    }while(strcmp(cChaine,"")==0);

}

//###########################################
//PROCEDURE renseignementInt
//*****************************************************************************************************//
//
// DESCRIPTION Demande  la saisie d'un entier et renvoie l'entier saisie
//
// ENTREE / La référence de l'entier saisie, la chaine d'invite
//
// SORTIE /L'entier modifié
//
// NOTE -
//*****************************************************************************************************//
void renseignementInt(int *pnEntier,const char cDemande[]){
    *pnEntier=-1;
    do{
        printf(cDemande);
        fflush(stdin);
        scanf("%d",pnEntier);
    }while(*pnEntier==-1);
}

//###########################################
//PROCEDURE renseignementInt
//*****************************************************************************************************//
//
// DESCRIPTION Fait les appel des procedures de saisie d'information du type carte d'indentité, renvoie le fichier carte d'identité renseigné par l'utilisateur
//
// ENTREE / La référence de type tIdentite
//
// SORTIE /Le type tIdentite modifié
//
// NOTE -
//*****************************************************************************************************//
void renseignementFicheIdentite(tIdentite *pstIdentite){
    char cString[TAILLE_CHAINE];

    renseignementChaine(cString,"Nom : \n");
    setNom(pstIdentite,cString);
    renseignementChaine(cString,"Prenom : \n");
    setPrenom(pstIdentite,cString);
    renseignementChaine(cString,"Adresse : \n");
    setAdresse(pstIdentite,cString);
    renseignementChaine(cString,"Ville : \n");
    setVille(pstIdentite,cString);
    renseignementChaine(cString,"Code Postale : \n");
    setCodePostal(pstIdentite,cString);

}

//###########################################
//PROCEDURE choixMenuPrincipal
//*****************************************************************************************************//
//
// DESCRIPTION Renvoie le caractère correspondant au choix du menu principal par l'utilisateur, attend la chiane correspondant à l'invite,
//  vérifie le caractère saisie est une lettre minuscule.
//
// ENTREE / La référence du char à retourné, la chaine correspondant à la demande.
//
// SORTIE /Le char modifié
//
// NOTE -
//*****************************************************************************************************//
void choixMenuPrincipal(char *pcnMenu, const char cDemande[]){
    char cMenu='\0';
    do{
        printf(cDemande);
        fflush(stdin);
        scanf("%c",&cMenu);
    }while(cMenu<='a'&&cMenu>='z');
    *pcnMenu = cMenu;
}

//###########################################
//PROCEDURE lectureIdentite
//*****************************************************************************************************//
//
// DESCRIPTION Affiche les informations d'un type tIdentite
//
// ENTREE / La référence du type tIdentite
//
// SORTIE / Le texte correspondant à l'affichage
//
// NOTE -
//*****************************************************************************************************//
void lectureIdentite(tIdentite *pstIdentite){
    char sString[TAILLE_CHAINE];

    putchar('\n');
    printf("%d",getId(pstIdentite));
    putchar('\n');
    getNom(pstIdentite,sString);
    puts(sString);
    getPrenom(pstIdentite,sString);
    puts(sString);
    getAdresse(pstIdentite,sString);
    puts(sString);
    getVille(pstIdentite,sString);
    puts(sString);
    getCodePostal(pstIdentite,sString);
    puts(sString);
    putchar('\n');

}

//###########################################
//PROCEDURE lectureIdentite
//*****************************************************************************************************//
//
// DESCRIPTION Affiche les types tIdentité du tableau, à partir du premier jusqu'au nombre correspondant à nTaille.
//
// ENTREE / La tableau de tIdentite, la taille
//
// SORTIE / Le texte correspondant à l'affichage
//
// NOTE - Appel la fonction lectureIdentite
//*****************************************************************************************************//
void lectureTabIdentite(tIdentite stIdentite[], const int nTaille){
    int nIndex=0;
    for(nIndex=0;nIndex<nTaille;nIndex++){
        lectureIdentite(&(stIdentite[nIndex]));
    }
}

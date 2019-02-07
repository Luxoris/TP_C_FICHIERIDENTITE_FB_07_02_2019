#include "vue.h"


//###########################################
//PROCEDURE renseignementChaine
//*****************************************************************************************************//
//
// DESCRIPTION Demande  la saisie d'une chaine et renvoie la chiane saisie
//
// ENTREE / La chaine � renvoy�, la chaine correspondant � l'invite de saisie
//
// SORTIE /La chaine renvoy�
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
// ENTREE / La r�f�rence de l'entier saisie, la chaine d'invite
//
// SORTIE /L'entier modifi�
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
// DESCRIPTION Fait les appel des procedures de saisie d'information du type carte d'indentit�, renvoie le fichier carte d'identit� renseign� par l'utilisateur
//
// ENTREE / La r�f�rence de type tIdentite
//
// SORTIE /Le type tIdentite modifi�
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
// DESCRIPTION Renvoie le caract�re correspondant au choix du menu principal par l'utilisateur, attend la chiane correspondant � l'invite,
//  v�rifie le caract�re saisie est une lettre minuscule.
//
// ENTREE / La r�f�rence du char � retourn�, la chaine correspondant � la demande.
//
// SORTIE /Le char modifi�
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
// ENTREE / La r�f�rence du type tIdentite
//
// SORTIE / Le texte correspondant � l'affichage
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
// DESCRIPTION Affiche les types tIdentit� du tableau, � partir du premier jusqu'au nombre correspondant � nTaille.
//
// ENTREE / La tableau de tIdentite, la taille
//
// SORTIE / Le texte correspondant � l'affichage
//
// NOTE - Appel la fonction lectureIdentite
//*****************************************************************************************************//
void lectureTabIdentite(tIdentite stIdentite[], const int nTaille){
    int nIndex=0;
    for(nIndex=0;nIndex<nTaille;nIndex++){
        lectureIdentite(&(stIdentite[nIndex]));
    }
}

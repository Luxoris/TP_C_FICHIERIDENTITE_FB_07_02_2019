#include "fichier.h"


//###########################################
//PROCEDURE recuperationTabIdentite
//*****************************************************************************************************//
//
// DESCRIPTION Recupère dans un tableau l'intégralité des valeurs stocké dans le fichier texte, sort le nb de varte d'identité.
//
// ENTREE / Le chemin du fichier, le tab de tIdentite, le nb de carte d'identite.
//
// SORTIE /Le tableau tIdentite modifié
//
// NOTE -
//*****************************************************************************************************//
void recuperationTabIdentite(const char cCheminFichier[],tIdentite TabStIdentite[],int *pnNbCarteIdentite){
    FILE *pFile;
    int nIndex=0;

    pFile=fopen(cCheminFichier,"r");

    while(fgetc(pFile)!=EOF){
        allocIdentite(&(TabStIdentite[nIndex]),TAILLE_CHAINE);
        recuperationIdentite(pFile,&(TabStIdentite[nIndex]));
        nIndex++;
    }
    if(nIndex>0){
            *pnNbCarteIdentite=TabStIdentite[nIndex-1].nId +1;
    }else{
        *pnNbCarteIdentite=0;
    }
    fclose(pFile);
}


//###########################################
//PROCEDURE recuperationIdentite
//*****************************************************************************************************//
//
// DESCRIPTION Recupère les valeurs d'un type carte d'indentite à partir du chemin du fichier texte
//
// ENTREE / La référence du fichier, la réference du type tIdentite
//
// SORTIE /Le type tIdentite Modifé
//
// NOTE -
//*****************************************************************************************************//

void recuperationIdentite(FILE *pFile,tIdentite *pstIdentite){
    char cChaine[TAILLE_CHAINE]="";
    int nTemp=0;
    recuperationChaine(pFile,cChaine);
    setNom(pstIdentite,cChaine);
    recuperationChaine(pFile,cChaine);
    setPrenom(pstIdentite,cChaine);
    recuperationChaine(pFile,cChaine);
    setAdresse(pstIdentite,cChaine);
    recuperationChaine(pFile,cChaine);
    setVille(pstIdentite,cChaine);
    recuperationChaine(pFile,cChaine);
    setCodePostal(pstIdentite,cChaine);
    fscanf(pFile,"%d",&nTemp);
    setId(pstIdentite,nTemp);
    fseek(pFile,1,SEEK_CUR);

}


//###########################################
//PROCEDURE recuperationChaine
//*****************************************************************************************************//
//
// DESCRIPTION Recupère la chaine de caractère contenu entre deux séparateur
//
// ENTREE / La référence du fichier, la chaine a retourner.
//
// SORTIE /La chaine modifié
//
// NOTE -
//*****************************************************************************************************//


void recuperationChaine(FILE *pFile,char cChaine[]){
    char cChar;
    strcpy(cChaine,"");
    do{
      cChar = fgetc(pFile);
      if(cChar!=SEPARATEUR){
        strncat(cChaine,&cChar,1);
      }
    }while(cChar!=SEPARATEUR);

}





//###########################################
//FONCTION ajoutFichierTexte
//*****************************************************************************************************//
//
// DESCRIPTION Ajoute les infromations du type carte d'identité dans un fichier texte.
//
// ENTREE / Le reference du type carte identtité, la chaine correspondant au chemin du fichier.
//
// SORTIE /Le fichier texte modifié, le code correspondant à la réussite ou à l'échec
//
// NOTE -
//*****************************************************************************************************//
int ajoutFichierTexte(const char cCheminFichier[],tIdentite *pstIdentite){
    FILE *pFile;
    char cChaine[TAILLE_CHAINE]="";

    if((pFile = fopen(cCheminFichier,"a"))==NULL){
        return -1;  //code correspondant à une erreur d'accès au fichier
    }else{

        fputc(SEPARATEUR,pFile);

        getNom(pstIdentite,cChaine);
        fputs(cChaine,pFile);
        fputc(SEPARATEUR,pFile);

        getPrenom(pstIdentite,cChaine);
        fputs(cChaine,pFile);
        fputc(SEPARATEUR,pFile);

        getAdresse(pstIdentite,cChaine);
        fputs(cChaine,pFile);
        fputc(SEPARATEUR,pFile);

        getVille(pstIdentite,cChaine);
        fputs(cChaine,pFile);
        fputc(SEPARATEUR,pFile);

        getCodePostal(pstIdentite,cChaine);
        fputs(cChaine,pFile);
        fputc(SEPARATEUR,pFile);

        fprintf(pFile,"%d",getId(pstIdentite));
        fputc(SEPARATEUR,pFile);

        fclose(pFile);
        return 1;   //code signifiant que la fonction s'est exécuté correctement
    }

}


//###########################################
//FONCTION supprimerFichier
//*****************************************************************************************************//
//
// DESCRIPTION Supprime un fichier
//
// ENTREE / Le chemin du fichier
//
// SORTIE /Le fichier supprimer
//
// NOTE -
//*****************************************************************************************************//
int supprimerFichier(const char cCheminFichier[]){
    if(remove(cCheminFichier)!= 0 ){
        return -5;  //code signifiant que la suppression est impossible
    }else{
        return 5;//code signifiant que la fonction s'est exécuté correctement
    }
}

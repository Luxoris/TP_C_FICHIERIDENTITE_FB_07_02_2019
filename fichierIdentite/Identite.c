#include "Identite.h"


//###########################################
//FONCTION getId
//*****************************************************************************************************//
//
// DESCRIPTION Permet de recuperer l'id d'un type tIdendite
//
// ENTREE / La r�ference du type structur�
//
// SORTIE / Le int correspodnant � la valeur
//
// NOTE
//*****************************************************************************************************//
int getId(tIdentite *pstIdentite){
    return pstIdentite->nId;
}

//###########################################
//Procedure setId
//*****************************************************************************************************//
//
// DESCRIPTION Permet de modifi� la valeur du type tIdentit�
//
// ENTREE / La r�ference du type structur�, la valeur � affecter
//
// SORTIE / Le type tIdentite modifi�
//
// NOTE
//*****************************************************************************************************//
void setId(tIdentite *pstIdentite,const int nId){
    pstIdentite->nId = nId;
}

//###########################################
//PROCEDURE getNom
//*****************************************************************************************************//
//
// DESCRIPTION Permet de recuperer le nom d'un type tIdendite
//
// ENTREE / La r�ference du type structur�
//
// SORTIE / La chaine correpsondant � la valeur du nom
//
// NOTE
//*****************************************************************************************************//
void getNom(tIdentite *pstIdentite,char cNom[TAILLE_CHAINE]){
    strcpy(cNom,pstIdentite->cNom);
}
//###########################################
//PROCEDURE setNom
//*****************************************************************************************************//
//
// DESCRIPTION Permet de d�finir le nom d'un type tIdendite
//
// ENTREE / La r�ference du type structur�, La chaine correpsondant � la valeur du nom
//
// SORTIE / Le type structur� modifi�
//
// NOTE
//*****************************************************************************************************//
void setNom(tIdentite *pstIdentite,const char cNom[TAILLE_CHAINE]){
    strcpy(pstIdentite->cNom,cNom);
}
//###########################################
//PROCEDURE getPrenom
//*****************************************************************************************************//
//
// DESCRIPTION Permet de recuperer le prenom d'un type tIdendite
//
// ENTREE / La r�ference du type structur�
//
// SORTIE / La chaine correpsondant � la valeur du prenom
//
// NOTE
//*****************************************************************************************************//
void getPrenom(tIdentite *pstIdentite,char cPrenom[TAILLE_CHAINE]){
    strcpy(cPrenom,pstIdentite->cPrenom);
}
//###########################################
//PROCEDURE setPrenom
//*****************************************************************************************************//
//
// DESCRIPTION Permet de d�finir le prenom d'un type tIdendite
//
// ENTREE / La r�ference du type structur�, La chaine correpsondant � la valeur du prenom
//
// SORTIE / Le type structur� modifi�
//
// NOTE
//*****************************************************************************************************//
void setPrenom(tIdentite *pstIdentite,const char cPrenom[TAILLE_CHAINE]){
    strcpy(pstIdentite->cPrenom,cPrenom);
}
//###########################################
//PROCEDURE getAdresse
//*****************************************************************************************************//
//
// DESCRIPTION Permet de recuperer l'adresse d'un type tIdendite
//
// ENTREE / La r�ference du type structur�
//
// SORTIE / La chaine correpsondant � la valeur de l'adresse
//
// NOTE
//*****************************************************************************************************//
void getAdresse(tIdentite *pstIdentite,char cAdresse[TAILLE_CHAINE]){
    strcpy(cAdresse,pstIdentite->cAdresse);
}
//###########################################
//PROCEDURE setAdresse
//*****************************************************************************************************//
//
// DESCRIPTION Permet de d�finir l'adresse d'un type tIdendite
//
// ENTREE / La r�ference du type structur�, La chaine correpsondant � la valeur de l'addresse
//
// SORTIE / Le type structur� modifi�
//
// NOTE
//*****************************************************************************************************//
void setAdresse(tIdentite *pstIdentite,const char cAdresse[TAILLE_CHAINE]){
    strcpy(pstIdentite->cAdresse,cAdresse);
}
//###########################################
//PROCEDURE getVille
//*****************************************************************************************************//
//
// DESCRIPTION Permet de recuperer la ville d'un type tIdendite
//
// ENTREE / La r�ference du type structur�
//
// SORTIE / La chaine correpsondant � la valeur de la ville
//
// NOTE
//*****************************************************************************************************//
void getVille(tIdentite *pstIdentite,char cVille[TAILLE_CHAINE]){
    strcpy(cVille,pstIdentite->cVille);
}
//###########################################
//PROCEDURE setVille
//*****************************************************************************************************//
//
// DESCRIPTION Permet de d�finir la ville d'un type tIdendite
//
// ENTREE / La r�ference du type structur�, La chaine correpsondant � la valeur de la ville
//
// SORTIE / Le type structur� modifi�
//
// NOTE
//*****************************************************************************************************//
void setVille(tIdentite *pstIdentite,const char cVille[TAILLE_CHAINE]){
    strcpy(pstIdentite->cVille,cVille);
}
//###########################################
//PROCEDURE getCodePostal
//*****************************************************************************************************//
//
// DESCRIPTION Permet de recuperer le code postal d'un type tIdendite
//
// ENTREE / La r�ference du type structur�
//
// SORTIE / La chaine correpsondant � la valeur du code postal
//
// NOTE
//*****************************************************************************************************//
void getCodePostal(tIdentite *pstIdentite,char cCodePostal[TAILLE_CHAINE]){
    strcpy(cCodePostal,pstIdentite->cCodePostal);
}
//###########################################
//PROCEDURE setCodePostal
//*****************************************************************************************************//
//
// DESCRIPTION Permet de d�finir le code postal d'un type tIdendite
//
// ENTREE / La r�ference du type structur�, Le code postal correpsondant � la valeur de la ville
//
// SORTIE / Le type structur� modifi�
//
// NOTE
//*****************************************************************************************************//
void setCodePostal(tIdentite *pstIdentite,const char cCodePostal[TAILLE_CHAINE]){
    strcpy(pstIdentite->cCodePostal,cCodePostal);
}

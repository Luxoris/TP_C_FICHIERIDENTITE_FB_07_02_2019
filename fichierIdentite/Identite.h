#ifndef IDENTITE_H_INCLUDED
#define IDENTITE_H_INCLUDED
#pragma once
//appel des bibliothèques et des fihciers d'entête
#include "define.h"
#include <string.h>

//définition d'un type structuré
typedef struct tIdentite{
    int nId;
    char cNom[TAILLE_CHAINE];
    char cPrenom[TAILLE_CHAINE];
    char cAdresse[TAILLE_CHAINE];
    char cVille[TAILLE_CHAINE];
    char cCodePostal[TAILLE_CHAINE];
}tIdentite;


//EMPREINTE des fonctions
extern int getId(tIdentite *pstIdentite);
extern void setId(tIdentite *pstIdentite,const int nId);

extern void getNom(tIdentite *pstIdentite,char cNom[TAILLE_CHAINE]);
extern void setNom(tIdentite *pstIdentite,const char cNom[TAILLE_CHAINE]);

extern void getPrenom(tIdentite *pstIdentite,char cPrenom[TAILLE_CHAINE]);
extern void setPrenom(tIdentite *pstIdentite,const char cPrenom[TAILLE_CHAINE]);

extern void getAdresse(tIdentite *pstIdentite,char cAdresse[TAILLE_CHAINE]);
extern void setAdresse(tIdentite *pstIdentite,const char cAdresse[TAILLE_CHAINE]);

extern void getVille(tIdentite *pstIdentite,char cVille[TAILLE_CHAINE]);
extern void setVille(tIdentite *pstIdentite,const char cVille[TAILLE_CHAINE]);

extern void getCodePostal(tIdentite *pstIdentite,char cCodePostal[TAILLE_CHAINE]);
extern void setCodePostal(tIdentite *pstIdentite,const char cCodePostal[TAILLE_CHAINE]);

#endif // IDENTITE_H_INCLUDED

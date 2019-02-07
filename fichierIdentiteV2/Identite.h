#ifndef IDENTITE_H_INCLUDED
#define IDENTITE_H_INCLUDED
#pragma once
//appel des biblioth�ques et des fihciers d'ent�te
#include "define.h"
#include <string.h>
#include <stdlib.h>

//d�finition d'un type structur�

/*typedef struct tIdentite{
    int nId;
    char cNom[TAILLE_CHAINE];
    char cPrenom[TAILLE_CHAINE];
    char cAdresse[TAILLE_CHAINE];
    char cVille[TAILLE_CHAINE];
    char cCodePostal[TAILLE_CHAINE];
}tIdentite;
*/

//d�finition d'un type structur�
    typedef struct tIdentite{
        int nId;
        char * pcNom;
        char * pcPrenom;
        char * pcAdresse;
        char * pcVille;
        char * pcCodePostal;
    }tIdentite;

//EMPREINTE des fonctions
extern int getId(tIdentite *pstIdentite);
extern void setId(tIdentite *pstIdentite,const int nId);

extern void getNom(tIdentite *pstIdentite,char cNom[]);
extern void setNom(tIdentite *pstIdentite,const char cNom[]);

extern void getPrenom(tIdentite *pstIdentite,char cPrenom[]);
extern void setPrenom(tIdentite *pstIdentite,const char cPrenom[]);

extern void getAdresse(tIdentite *pstIdentite,char cAdresse[]);
extern void setAdresse(tIdentite *pstIdentite,const char cAdresse[]);

extern void getVille(tIdentite *pstIdentite,char cVille[]);
extern void setVille(tIdentite *pstIdentite,const char cVille[]);

extern void getCodePostal(tIdentite *pstIdentite,char cCodePostal[]);
extern void setCodePostal(tIdentite *pstIdentite,const char cCodePostal[]);

extern void freeIdentite(tIdentite *pstIdentite);
extern int allocIdentite(tIdentite *pstIdentite,const int nTailleChaine);

#endif // IDENTITE_H_INCLUDED

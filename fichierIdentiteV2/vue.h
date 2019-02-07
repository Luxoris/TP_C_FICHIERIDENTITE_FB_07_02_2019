#ifndef VUE_H_INCLUDED
#define VUE_H_INCLUDED
#pragma once

//appel des fichiers d'ent�te
#include "define.h"
#include "Identite.h"
#include "fichier.h"
#include <string.h>

//Prototype des m�thodes
extern void renseignementChaine(char cChaine[TAILLE_CHAINE], const char cDemande[]);
extern void renseignementInt(int *pnEntier,const char cDemande[]);
extern void renseignementFicheIdentite(tIdentite *pstIdentite);

extern void lectureIdentite(tIdentite *pstIdentite);
extern void lectureTabIdentite(tIdentite stIdentite[], const int nTaille);

extern void choixMenuPrincipal(char *pcnMenu, const char cDemande[]);
#endif // VUE_H_INCLUDED

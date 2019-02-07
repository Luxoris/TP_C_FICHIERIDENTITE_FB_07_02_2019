#ifndef FICHIER_H_INCLUDED
#define FICHIER_H_INCLUDED
#pragma once

//inclusion des headers et des bibliothèques
#include "Identite.h"
#include <stdio.h>
#include <string.h>

#define SEPARATEUR '#'
#define SEPARATEUR_IDENTITE '#'

//prototypes des méthodes
extern int ajoutFichierTexte(const char cCheminFichier[],tIdentite *pstIdentite);
extern void recuperationTabIdentite(const char cCheminFichier[],tIdentite TabStIdentite[],int *pnNbCarteIdentite);
extern void recuperationIdentite(FILE *pFile,tIdentite *pstIdentite);
extern void recuperationChaine(FILE *pFile,char cChaine[]);
extern int getNbIdentite(const char cCheminFichier[]);

extern int supprimerFichier(const char cCheminFichier[]);


#endif // FICHIER_H_INCLUDED

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <alloc.h>

char* Saisir(int taillemax)
{
	char chaine[taillemax];
	fgets(chaine, taillemax, stdin);
	chaine[strlen(chaine) - 1] = '\0';
	
	/*
	char* pChaine = (char*) malloc(taillemax * sizeof(char));
	strcpy(pChaine, chaine);
	return pChaine;
	*/
	
	char* pChaine = (char*) malloc(strlen(chaine) * sizeof(char));
	strcpy(pChaine, chaine);
	return pChaine;	
}

int main(void)
{
	char* chaine;
	printf("Saisir une chaine :\n");
	chaine = Saisir(100);
	printf("Chaine : %s\n", chaine);
	printf("Adresse : %d", chaine);
	free(chaine);
}
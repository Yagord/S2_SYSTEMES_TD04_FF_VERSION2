#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <alloc.h>
#define NBR 30


char *Saisir(int tailleMaxi)
{
	
	char *str = (char*)malloc((tailleMaxi+1)*sizeof(char));
	fgets(str, tailleMaxi, stdin);
	printf("taille : %d\n", strlen(str));
	(char*)realloc(str,(strlen(str))*sizeof(char));
	return str;
	
	
}


int main(void)
{
	char* chaine;
	
	printf("Saissisez votre nom :\n");
	chaine = Saisir(16);
	
	printf("Nom : %s\n", chaine);
	printf("Adresse : %d\n", chaine);
	
	free(chaine);
	
	return 0;
}
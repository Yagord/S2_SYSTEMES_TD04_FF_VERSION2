#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define NBR 30

void SaisirChaine(char *s, int taillemax)
{
	fgets(s, taillemax, stdin);
}

void clean(char *s)
{
    char *p = strchr(s, '\n');

    if (p)
    {
        *p = 0;
    }
}
	
int main(void)
{
	char *chaine;
	printf("Saisir une chaine :\n");
	SaisirChaine(chaine, NBR);
	clean(chaine);
	printf("Chaine : %s\n", chaine);
	printf("Adresse : %d", chaine);
}
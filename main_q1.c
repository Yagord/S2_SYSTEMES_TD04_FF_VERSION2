#include <stdio.h>
#include <string.h>

int main(void)
{
	char chaine[8] = "bonjour";
	printf("Chaine : %s\n", chaine);
	printf("Taille : %d\n", strlen(chaine));
	printf("Adresse : %d\n", chaine);
	return 0;
}

#include <stdio.h>
#include <ctype.h>
#define NBR 30

void StrtoUpper(char *s)
{
	if (*s != NULL)
	{
		int i;
		/*while (s[i] != '\0')
		{
			s[i] = toupper(s[i]);
			i++;
		}*/
		
		while (*s != '\0')
		{
			*s = toupper(*s);
			s++;
		}
		
	}
}

int main(void)
{
	char chaine[NBR];
	printf("Saissisez votre nom :\n");
	scanf("%s", chaine);
	printf("Nom : %s\n", chaine);
	printf("Adresse : %d\n", chaine);
	
	StrtoUpper(chaine);
	printf("Nom : %s\n", chaine);
	printf("Adresse : %d\n", chaine);
	return 0;
}
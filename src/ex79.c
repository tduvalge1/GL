#include <userint.h>
#include <ansi_c.h>

int main(void)

{
	char phrase[100];
	char prenom[100];
	char nom[100];
	unsigned int annee_de_naissance ;
	
	scanf("%s %s %u", prenom, nom, &annee_de_naissance); 
	
	
	sprintf(phrase,"je m'apelle ""%s" " " "%s" "et j'ai ""%u" " " "ans", prenom, nom, annee_de_naissance); 
	printf(phrase);
	MessagePopup("popup",phrase);
	return 0;
}

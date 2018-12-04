
#include <stdio.h>
#include <userint.h>
int main(void)
{
	char ligne1[80] = "Nom: pentagone_B";
	char ligne2[80] = "Nb points: 5";
	char ligne3[80] = "Cordonnees: 10 20 30 40 43 53 35 -1";
					  
	char nom_figure[100];
	unsigned long int  Nb_points;
	int  x[100];
	int  y[100];
	
	char popup1[100];
	char popup2[100];
	
	unsigned char i;
	
					 
	sscanf(ligne1, "%*s %s", nom_figure);
	sscanf(ligne2, "%*s %*s %lu", &Nb_points);
	
	
	sscanf(ligne3, "%*s %u %*u %u %*u %u %*u %u %*u", &x[0], &x[1], &x[2], &x[3]);
	sscanf(ligne3, "%*s %*u %u %*u %u %*u %u %*u %u", &y[0], &y[1], &y[2], &y[3]);
	
	for(i=0;i<Nb_points-1;i++)
	{
		if(x[i]==-1 || y[i]==-1)
		{
			sprintf(popup2,"erreur de donnees");
			MessagePopup("erreur",popup2);
		}
	}
	
	sprintf(popup1,"la figure ""%s"" possede ""%lu"" sommets",nom_figure,Nb_points);
	MessagePopup("popup1",popup1);
		
	return 0;
}

//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib_suite.h"

short tirerNumero(void);
int main(void)
{

unsigned char i,j,k,l;
unsigned char resultat=0,score_max=0;
unsigned char joueur[6]=						  
	{4,39,42,16,34,16};
short tirage[6];
	
for(k=0;k<100;k++)	  // Les 100 tirages
	{
		resultat=0;
		initialiserTirage(); 
		
		for(l=0;l<6;l++)  // Tirage de la grille du lotot   
		{
			tirage[l]=tirerNumero();
		}
	
		
	for(i=0;i<6;i++)	// Comparaison grille jouer et grille du loto
		{
			for(j=0;j<6;j++)
			{
				if(joueur[i]== tirage[j])
				{
				resultat=resultat+1; // Nombre de chiffre ou nombre identique a la grille du loto
				}
			}
		
		}
		if(resultat>score_max)  // Combien de chiffre au max a ete identique
			{
				score_max=resultat;
			}
		
	}


return 0;

}

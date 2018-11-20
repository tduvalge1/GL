#include <TP_lib.h>


void main(void)
{
short resultat=0, i=0, lancer=0;

while(lancer!=1)
	{
	lancer=LancerDe();
	
	if(lancer==2 || lancer==4 ||lancer==6)
	{
		resultat=resultat+lancer;
		i=i+1;
	}
	else if(lancer==3)
	{
		resultat=resultat*2;
		i=i+1;
	}
	else if(lancer==5)
	{
		resultat=resultat-5;
		if(resultat<0)
		{	
			resultat=0;
			i=i+1;
		}
		else
		{	
			resultat=resultat;
			i=i+1;
		}
	}
	else 
	{
		resultat=resultat;
		i=i+1;
	}
				 
	
	}
}

#include <ansi_c.h>

//  Copyright (c) 2018 Antoine Tran Tan



unsigned char seuil=69,i,j,k,l,m,NombreMax=0,q ;
unsigned char bin[10]=						  //petit 1
	{12,78,46,46,13,79,95,130,3,35};
int sat[10]=								 //petit 2
	{-134,234,-46,123,299,189,-408,130,303,200};
int SEUILB=-100, SEUILH=200;
int dis[10]=								 //petit 3
	{45,96,56,120,3,92,201,68,163};			
unsigned char a[5]=							//petit 4
	{1,5,9,8,11};
unsigned char b[5]=
	{0,0,0,0,0,0};
unsigned char miroir[8]=				   //petit 5
	{13,5,31,2};

	

int main(void)
{

	for(i=0;i<10;i=i+1)   //petit 1
	{
		if(bin[i]>seuil)
		{
			bin[i]=1;
		}
		else 
		{
			bin[i]=0;
		}
	
	}	   
	for(j=0;j<10;j=j+1)		//petit 2
	{	
		if(sat[j]>SEUILB && sat[j]<SEUILH)
		{
			sat[j]=sat[j];
		}
		else if(sat[j]<SEUILB)
		{
			sat[j]=SEUILB;
		}
		else if(sat[j]>SEUILH)
		{
			sat[j]=SEUILH;
		}
	}
	

	for (k=1;k<10;k=k+1)  //petit 3
	{
		dis[k]=dis[k]-dis[k-1];
	}
					
	
	for(l=1;l<6;l=l+1)  //petit 4 
	{
		b[l-1]=a[5-l];
		
	}
	
	for(q=0;q<4;q=q+1) //petit 5
	{
		miroir[(8/2)+q]=miroir[q];
	}
				 

}		
	

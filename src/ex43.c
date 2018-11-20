//  Copyright (c) 2018 Antoine Tran Tan
//

#include <stdlib.h>


int main(void)
{
    int s1=3 , s2 = 3, s3=0,s4=0, ns1 = 0, ns2=0, ns3=0, v1s3=0, ns4=0, v1s4=3, v2s4=7 ;
	
    
    while(s1<146)   // question 1
    {
		
		s1 = 3 + ns1;
        ns1 = ns1 + 3;
	
    }
	
	while(s2<9876) // question 2
    {
		
		s2 = 3 + ns2;
        ns2 = ns2 + 3;
	
    }
    
	while(ns3<13)   // question 3
    {
		v1s3= rand() % 10 + 1;
		s3 = s3 + v1s3;
        ns3 = ns3 + 1;
	
    }
	
	while(ns4<20)   // question 4
    {
		if(v1s4>v2s4)
		{
			s4=s4+v2s4;
			v2s4=v2s4+7;
		}
		else
		{
			s4=s4+v1s4;
			v1s4=v1s4+3;
		}
		ns4 = ns4 + 1;
	
    }
	
	return 0;
}

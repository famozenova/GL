//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"

#include <userint.h>
#include <ansi_c.h>




int main(void)
{

	
	char ligne1 [80] = "Nom: pentagone_B" ;
	char ligne2 [80] = "Nb points: 3" ; 
	char ligne3 [80] = "Cordonnees: 10 20 30 20 30 25 43 53 35 65" ; 
	char message[20];
	char message1[50];
	
	char var1[100];
    long var2=0;
	long corX[5]= {0 , 0 , 0 , 0 , 0};
	long corY[5]= {0 , 0 , 0 , 0 , 0};
	unsigned char cpt1=0, i;
	


	sscanf( ligne1, "%*s %s" , var1);
	sscanf( ligne2 ,"%*s %*s %d", &var2);
	sscanf( ligne3 ,"%*s %d %*d %d %*d %d %*d %d %*d %d %*d" , &corX[0] , &corX[1] , &corX[2] , &corX[3] , &corX[4]);
	sscanf( ligne3 ,"%*s %*d %d %*d %d %*d %d %*d %d %*d %d" , &corY[0] , &corY[1] , &corY[2] , &corY[3] , &corY[4]); 

	
	
		for(i=0 ; i<5 ; i++)
		{
		
			if (corX[i] != -1)
			{  
			   cpt1++;	
			}
			
			if (corY[i] != -1)
			{
			   cpt1++;
			}
		}
	
	
		if(var2*2> cpt1 || var2*2<cpt1)
		{
            sprintf(message, "IT'S A PRANK");
			MessagePopup("Erreur :", message);
		   
		}
		
		 else 
		 { 
	       sprintf(message1, "La figure %s possède %d  sommets", var1 , var2); 
    	   MessagePopup("Titre" , message1);
		 }
	
}

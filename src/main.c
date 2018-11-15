//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"

#include "TP_lib.h"


int main(void)

{
	 
	 char n= LancerDe();
	 unsigned long int resultat =0;
	
	
	while(n!=1)
	{
		
		  if(n%2==0)
		   
			 resultat = resultat + n;
		  
		  
		  
		  else if(n==3)
		  
			  resultat= resultat *2;
			  
		  
		  
		   else
			   
		   {
			   if(resultat<2)
				   
				   resultat= 0;
			   
			   else 
				   
			   resultat = resultat -2;
		   } 
			
		n= LancerDe();	   
	}
	return 0;
}

//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"

#include "TP_lib_suite.h"



int main(void)
{
	
	
    unsigned char combi_ga[6];
	unsigned char combi_jo[6] = { 35 , 42 , 22 , 45 , 2 , 20 } ;
	unsigned char i , j , z , nb_bon = 0 , best_score = 0;
  

	for(z=0 ; z<100 ; z++)
	{
	initialiserTirage();
	nb_bon = 0;
	
	
	
	for( j=0 ; j<6; j++)
	{
		combi_ga[j] = tirerNumero();
	}

	
	for( i=0; i<6 ; i++)
	{
	 
		for ( j=0 ; j<6 ; j++ )
	 	{
			if (combi_jo[i] == combi_ga[j])
			nb_bon++;
	 
		 if( nb_bon > best_score)
		  {
		   best_score = nb_bon;
		  }
		}
		
	}
	}

  return 0;
	
}

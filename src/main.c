//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"

int main(void)
{
	unsigned char combi_ga[6] = {1 , 8 , 40 , 35 , 23 , 20};
    unsigned char combi_jo[6] = {20 , 32 , 40 , 8 , 24 , 19}; 
	unsigned char i , j;
	
	for ( i=0 , j=0 ; i<6 , j<6 ; i++ , j++)
		
	{
	  
		combi_ga[i] = combi_jo[j];
	
	}


    return 0;
}

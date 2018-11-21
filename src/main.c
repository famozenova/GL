//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"

#include <math.h>
#include "stdlib.h"

#define SEUIL 4
#define SEUILH 200
#define SEUILB -100


int main(void)

{
	 unsigned char bin[10]= {0,1,2,3,4,5,6,7,8,9};
	 unsigned char i;
	 
	 
	 

	 for(i=0; i<10 ; i=i+1)
	 {
		if (bin[i]>SEUIL)
			
			bin[i]=1;
			
			
	     else 
		
			 bin[i]=0;
	 }
	 
	 
	 short int sat[10] = {rand()-16384 , rand()-16384 , rand()-16384 , rand()-16384 , rand()-16384 , rand()-16384 , rand()-16384 , rand()-16384 , rand()-16384 , rand()-16384};									
	 short int y;
	 
	 
	 
	 for(y=0 ; y<10 ; y=y+1)								
	 {

		 if (sat[y] > SEUILH)
			
			sat[y] = SEUILH;
		

		else if(sat[y] < SEUILB)
			
			sat[y] = SEUILB;
		
		else 
			
			sat[y]= sat[y] ;
	 }
	 
	   	
	 
	     int dist[10]= {0 , 2 , 8 , 19 , 20 , 25 , 38 , 45 , 65 , 80};
		 int z;

		 for(z=9 ; z>0 ; z=z-1)
	  {
	 
		  
						   
			  dist[z] = fabs( dist[z-1] - dist[z] );
		  
	  }		
	  
	    int a[5]= { 2 , 4 , 6 , 8 , 10} ; 
		int b[5];
	    int f , D=5;
		  
		for(f=4 ; f>0 ; f= f-1)
		{

			b[f]= a[D-f];
			
		}
		
		
		int miroir[10] = { 2 , 4 , 6 , 8 , 10 };
		int u , v ;
		
		for (u=9, v=0 ; v<5 , u>4 ;  v = v+1 ,u = u-1 )
		{
			miroir[u-1]=miroir[v+1];
		}
	 

	 return 0;
}
		

//  Copyright (c) 2018 Antoine Tran Tan
// 

#include "my_header.h"

#include <math.h>
#include "stdlib.h"

#define RAND_MAX 32767


int main(void)
{
	
	   unsigned long int S1=0, S3=0 , S4=3;
	   int n=1 , w=1, z=1, a=0;
	   
	   while(n<(9876/3))
	   {
		   S1= S1+3*n;
		   n=n+1;
	   }
	  
	   while(w<13)
	   {
		   S3= S3+rand()%10+1;
		   w= w+1;
	   }
	   
	   while(z<20)
	   {
		   if(a%3==0 || a%7==0)
			 
		   {
			   S4= S4 + a;
		       a= a+1;
			   z= z+1;
		   }  
		 else 
		
			 a= a+1;
	   }
	   
	   
	   return 0;
	   
}
			  

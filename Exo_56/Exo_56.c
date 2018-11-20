#define SEUIL 1

int main(void)

{
	 unsigned char bin[10]= {0,1,2,3,4,5,6,7,8,9};
	 unsigned char i;
	 
	 for(i=0; i>SEUIL ; i=i+1)
	 {
		if(i>SEUIL)
		{	
			bin[i]=1;
			i++;
		}	
	     else
			 
			bin[i]=0;
			i=i+0;
			 
	 }

	 return 0;
}
		

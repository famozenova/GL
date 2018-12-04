//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include <userint.h>
#include "stdio.h"



int main(void)
{

char Nom[50] , prenom[50] , age[50];
char message[100];




printf("Nom :");
scanf ("%s" , Nom); 

printf("Prenom :"); 
scanf ("%s" , prenom);

printf("Age :");  
scanf ("%s" , age);

sprintf(message, "Je m'appelle %s %s et j'ai %s ans" , Nom ,prenom , age);
MessagePopup ("Présentation",message);


 return 0;
}

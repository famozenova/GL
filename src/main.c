//  Copyright (c) 2018 Antoine Tran Tan
// C'est l'exercice 44 et non le 43, désolé

#include "my_header.h"

#include <ansi_c.h>
#include <userint.h>
#include "TP_lib.h"
#include "cvi_gui.h"

void main(void)
{
	short resultat, i=0;
	
	while(i<10)
	{
		resultat = LancerDe();
		printf("Numero %d ",resultat);
		i++;
	}
}


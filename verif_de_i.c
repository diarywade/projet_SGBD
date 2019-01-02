/* verification de l'option -i*/
#include<stdio.h>
#include<string.h>
#include "fonction.h"
int verif_de_i(char* argument[] ,int tail)
{
	if (tail==7)
	{
		if(strcmp(argument[1],"-i")!=0) 
		{
			printf("veuiller saisir l'option -i" );

			return 1;
		}
		else
			return 0;
	}
}

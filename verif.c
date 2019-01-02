/* verification s'il a introduit xml ou json aprés le -i*/
#include<stdio.h>
#include<string.h>
#include "fonction.h"
int verif(char* argument[] ,int tail)
{
if (tail==7)
{
	if((strcmp(argument[2],"xml")!=0) || (strcmp(argument[2],"json")!=0) )
	{
		printf("spécifier s'il s'agit d'un fichier xml ou json" );

		return 1;

	}
	else
		return 0;
}
}

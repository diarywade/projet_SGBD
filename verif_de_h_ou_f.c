* verification de l'option -h  ou -f*/
#include<stdio.h>
#include<string.h>
#include "fonction.h"
int verif_f_ou_h(char* argument[] ,int tail)

{
	if (tail==7)
	{
		if((strcmp(argument[4],"-h")!=0) || (strcmp(argument[4],"-f")!=0) )
		{
			printf("saississez l'option -h oubien l'option -f" );

			return 1;
		}
		
		else
			return 0;
	}
}

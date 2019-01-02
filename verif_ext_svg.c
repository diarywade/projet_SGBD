/* verification de l'extension svg du fichier de sorti*/
#include<stdio.h>
#include<string.h>
#include "fonction.h"
int verifsvg(char* argument[] ,int tail)
{
if (tail==7){
		int tail_Fi_sor;
		tail_Fi_sor=strlen(argument[6]);
		if ((argument[6][tail_Fi_sor-4]=='.') && (argument[6][tail_Fi_sor-3]=='s') && (argument[6][ttail_Fi_sor-2]=='v') && (argument[6][tail_Fi_sor-1]=='g'))

			return 0;
		else
		{
		printf("l'extension svg du fichier de sorti est .svg ");
		return 1;
		}
}				
}

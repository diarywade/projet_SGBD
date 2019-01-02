/* verification de l'extension xml ou json du fichier d'entre*/
#include<stdio.h>
#include<string.h>
#include "fonction.h"
int verif_de_xml_json(char* argument[] ,int tail)

{
int tail;/* la variable tail donne le nombre d'element de la commande xj_convertor*/
if (tail==7)
{
	int tail_N_de_fi;

	tail_N_de_fi=strlen(argument[4]);
	if (((argument[4][tail_N_de_fi-4]=='.') && (argument[4][tail_N_de_fi-3]=='x') && (argument[4][tail_N_de_fi-2]=='m') 
		&& (argument[4][tail_N_de_fi-1]=='l')) ||  ((argument[4][tail_N_de_fi-5]=='.') 
		&& (argument[4][tail_N_de_fi-4]=='j') && (argument[4][tail_N_de_fi-3]=='s') && (argument[4][tail_N_de_fi-2]=='o')
		 && (argument[4][tail_N_de_fi-1]=='n')))
	
		return 0;
	
	else {

		printf("le fichier d'entree n'est pas au bon format");
		return 1;
	}
}
}

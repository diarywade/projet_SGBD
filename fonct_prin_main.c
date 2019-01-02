#include<stdio.h>
#include<string.h>
#include "fonction.h"
int main(int argc, char const *argv[])
{
if (verif_de_xml_json(argc,argv)==0 && verif(argc,argv)==0 && verifsvg(argc,argv)==0 && verif_f_ou_h(argc,argv)==0)
	printf("nous pouvons passer au traitement" );
} 		

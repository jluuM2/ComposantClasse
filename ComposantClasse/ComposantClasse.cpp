// ComposantClasse.cpp : Defines the initialization routines for the DLL.
//

#include "ComposantClasse.h"


	
int ComposantClasse::do_Method(int p1, int p2){
	return p1+p2;
}

char * ComposantClasse::getVersion(void){
	return "ComposantClasse version :" COMPOSANTCLASSE_VERSION_STR;
}


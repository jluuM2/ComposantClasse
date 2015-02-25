#define WINDOWS_LEAN_AND_MEAN
#include <windows.h>
#include <iostream>

#include "composantclasse.h"


int main(int argc, char * argv)
{
	int data1=3;
	int data2=5;

	int valeur1;

	ComposantClasse * composant=new(ComposantClasse);

	valeur1=composant->do_Method(data1,data2);


	std::cout << composant->getVersion() << std::endl;
	std::cout << "valeur 1 :" << valeur1 <<  std::endl;
	Sleep(1000);
}

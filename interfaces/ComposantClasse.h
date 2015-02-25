#pragma once
// ComposantClasse.h : main header file for the ComposantClasse DLL
//
#pragma once
#ifndef COMPOSANTCLASSE_H
#define COMPOSANTCLASSE_H

#define COMPOSANTCLASSE_VERSION 1,5,0,0
#define COMPOSANTCLASSE_VERSION_STR "1,5,0,0"

#ifdef COMPOSANTCLASSE_EXPORTS
	#define COMPOSANTCLASSE_INTERFACE __declspec(dllexport)
#else
	#define COMPOSANTCLASSE_INTERFACE __declspec(dllimport)
#endif


class COMPOSANTCLASSE_INTERFACE ComposantClasse{
public:
	int do_Method(int p1, int p2);

	char * getVersion(void);
};

#endif



#include "Arbre.h"
#include <iostream>
using namespace std;



Arbre::Arbre(int v):val(v),filsG(nullptr),filsD(nullptr)
{
}

void Arbre::Insere(int a)
{
	Arbre* NE = new Arbre(a);
	Arbre* tmp=this;
	if (filsG == nullptr)
	{
		filsG = NE;
	}
	else if (filsD == nullptr)
	{
		filsD = NE;
	}
	else if(filsG->filsG==nullptr || (filsG->filsG != nullptr && filsG->filsD == nullptr))
		filsG->Insere(a);
	else filsD->Insere(a);
}

void Arbre::afficherPrefixe() const
{
	if (this != nullptr)
	{
		cout << val << endl;
		filsG->afficherPrefixe();
		filsD->afficherPrefixe();
	}
}

void Arbre::afficherLargeur() const
{
	static bool test = true;
	if (test == true)
	{
		cout << val << endl;
		test = false;
	}

	if(this!=nullptr)
	{
		if(filsG != nullptr) cout << filsG->val << endl;
		if (filsD != nullptr) cout << filsD->val << endl;

		filsG->afficherLargeur();
		filsD->afficherLargeur();
	}
}

Arbre::~Arbre()
{
}

#pragma once
class Arbre
{
private:
	int val;
	Arbre* filsG;
	Arbre* filsD;
public:
	Arbre(int v);
	void Insere(int a);
	void afficherPrefixe()const;
	void afficherLargeur()const;
	~Arbre();
};



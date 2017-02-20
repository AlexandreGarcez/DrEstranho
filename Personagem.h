#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <iostream>
#include <string>
#include "Item.h"
#include "Data.h"
using namespace std;

class Personagem {

	friend ostream& operator<<(ostream &, const Personagem &);

public:
	bool operator==( const Personagem & ) const;
	bool operator!=( const Personagem & ) const;
	void operator=(const Personagem &);
	Presonagem();
	Personagem(int, const string &);
	Personagem(const Personagem &);
	void adicionarItem(const Item &);
	void removerItem(int);
	void mostrarDia() const;
	int getIdade();
	string getNome();
	Item* getItens();
	void setIdade(int);
	void setNome(const string &);
	
protected:
	
	int nItens;
	string nome;
	int idade;
	Item* itens;
	Data dataAtual;
	
};

#endif	

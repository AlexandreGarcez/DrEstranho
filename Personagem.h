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
	Presonagem();
	Personagem
	void adicionarItem(const Item &);
	void mostrarDia() const;
	int getIdade();
	string getNome();
	Item* getItens();
	void setIdade(int);
	void setNome(const string &);
	void removerItem(int);
	
private:
	
	int nItens;
	string nome;
	int idade;
	Item* itens;
	Data dataAtual;
	
};


#include <iostream>
#include <string>
#include "Item.h"

using namespace std;

class DrEstranho
{
	friend ostream& operator<<(ostream &, const DrEstranho &);
public:
	bool operator==(const DrEstranho & ) const;
	static int nDr;
	DrEstranho();
	DrEstranho(int, int, const string &);
	DrEstranho(const DrEstranho &);
	void barganhar();
	void usarHabilidade();
	void adicionarItem(const Item &);
	int getMana();
	int getIdade();
	string getNome();
	Item* getItens();
	void setIdade(int);
	void setMana(int);
	void setNome(const string &);
private:
	int nItens;
	int mana;
	string nome;
	int idade;
	Item* itens;
};

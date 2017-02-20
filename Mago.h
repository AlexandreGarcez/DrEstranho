#include <iostream>
#include <string>
#include "Item.h"
#include "Data.h"
using namespace std;


class Mago : public Personagem {
	
friend ostream& operator<<(ostream &, const Mago &);

public:
	bool operator==( const Mago & ) const;
	bool operator!=( const Mago & ) const;
	void usarMagia();
	int getMana();	
	void setMana(int);
	~Mago();
private:	
	int mana;
}


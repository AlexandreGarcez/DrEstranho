#ifndef MAGO_H
#define MAGO_H

#include <iostream>
#include <string>
#include "Personagem.h"
using namespace std;


class Mago : public Personagem {
	
friend ostream& operator<<(ostream &, const Mago &);

public:
	Mago();
	Mago( int, int, const string & );
	bool operator==( const Mago & ) const;
	bool operator!=( const Mago & ) const;
	void operator=(const Mago &);
	void usarMagia();
	int getMana();	
	void setMana(int);
	~Mago();
protected:	
	int mana;
};

#endif	

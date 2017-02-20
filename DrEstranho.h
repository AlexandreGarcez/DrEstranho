#ifndef DRESTRANHO_H
#define DRESTRANHO_H

#include <iostream>
#include <string>
#include "Mago.h"
using namespace std;

class DrEstranho : public Mago{
	
	friend ostream& operator<<(ostream &, const DrEstranho &);
public:
	bool operator==( const DrEstranho & ) const;
	bool operator!=( const DrEstranho & ) const;
	
	DrEstranho();
	DrEstranho( int, int, const string & );
	DrEstranho(const DrEstranho &);
	~DrEstranho();
	void barganhar();
	static void DimensaoAtual();
	static const int DIMENSOES;

private:
	static int numeroDimensoes;
	static int nDr;
};

#endif	

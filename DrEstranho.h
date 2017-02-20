#include <iostream>
#include <string>
#include "Item.h"
#include "Data.h"
using namespace std;


class DrEstranho : public Mago{
	
	friend ostream& operator<<(ostream &, const DrEstranho &);
public:
	bool operator==( const DrEstranho & ) const;
	bool operator!=( const DrEstranho & ) const;
	static int nDr;
	DrEstranho();
	DrEstranho(int, int, const string &);
	DrEstranho(const DrEstranho &);
	~DrEstranho();
	void barganhar();
	static void DimensaoAtual();
	

private:
	
	static const int Dimensoes;
	static int NumeroDimensoes;
	
};

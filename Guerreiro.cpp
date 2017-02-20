#include <iostream>
#include <string>
#include "Item.h"
#include "Data.h"
using namespace std;



class Guerreiro : Personagem {

public:
	void usarArma();
	int getFuria();
	void setFuria();
private:
	int furia;
};


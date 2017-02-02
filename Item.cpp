#include "Item.h"

Item::Item() {
    this->forca = 0;
    this->nome = "Sem nome";
}

Item::Item(int forca, const string &nome) {
    if (forca > 0)
        this->forca = forca;

    if (nome.length() > 0)
        this->nome = nome;
    else
        this->nome = "Sem nome";
}

void Item::setNome(const string &nome) {
    if (nome.length() > 0)
        this->nome = nome;
}

void Item::setForca(int forca) {
    if (forca > 0)
        this->forca = forca;
}

string Item::getNome() {
    return this->nome;
}

int Item::getForca() {
    return this->forca;
}

ostream &operator<<(ostream &output, const Item &numero){
	
	output << "O numero do item é " << numero.id;
	
	return output;
}

bool Item::operator==(const Item &Item1 ) const
{
	
	if ( this->forca != Item1.forca )
	return false;
	
	if ( this->durabilidade != Item1.durabilidade )
	return false;
	
	if ( this->nome != Item1.nome )
	return false;
	
	if ( this->id != Item1.id )
	return false;
	return true;
}


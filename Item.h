#ifndef ITEM_H
#define ITEM_H

#include <string>

using namespace std;

class Item
{
	friend ostream &operator<<(ostream &, const Item &);

public:
	bool operator==( const Item & ) const;
	bool operator!=( const Item & ) const;
	void operator=(const Item &);
    Item();
    Item(int, const string &);
    void encantar();
    void setNome(const string &);
    void setForca(int);
    string getNome();
    int getForca();
    int getDurabilidade();
    int getId();
private:
    string nome;
    int forca;
    int durabilidade;
    int id;
    int numeroItens;
    string *itens;
};

#endif	

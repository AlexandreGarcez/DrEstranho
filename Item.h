#include <string>

using namespace std;

class Item
{
	friend ostream &operator<<(ostream &, const Item &);

public:
	bool operator==( const Item & ) const;
	bool operator!=( const Item & ) const;
    Item();
    Item(int, const string &);
    void encantar();
    void setNome(const string &);
    void setForca(int);
    string getNome();
    int getForca();
    int getDurabilidade();
    int getId();
	void operator=(const Item &);
private:
    string nome;
    int forca;
    int durabilidade;
    int id;
    int numeroItens;
    string *itens;
};

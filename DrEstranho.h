#include <iostream>
#include <string>

using namespace std;

class DrEstranho // Nome da Classe
{
public:
	static int nDr;
	DrEstranho();
	DrEstranho(int, int, string);
	DrEstranho(const DrEstranho&);
	void barganhar(); // Nome do método
	int getMana();
	int getIdade();
	string getNome();
	void setIdade(int);
	void setMana(int);
	void setNome(string);
private:
	int mana;
	string nome;
	int idade;
	
};

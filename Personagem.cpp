#include "DrEstranho.h"
#include <iostream>
#include "Data.h"

using namespace std;



Personagem::Personagem(int idade, const string &nome):dataAtual(19, 9, 1987){
	if(idade > 0)
		this->idade = idade;
	else
		this->idade = 30;
	if(nome.length() < 100 && nome.length() > 1)
		this->nome = nome;
	else
		this->nome = "Stephen Vicent Strange";

	this->nItens = 0;

	this->itens = new Item[nItens];

}

Personagem::Personagem(const Personagem &p2):dataAtual(19, 9, 1987){
	this->idade = p2.idade;
	this->nome = p2.nome;
	this->itens = p2.itens;
	this->nItens = p2.nItens;
	
}

Personagem::~Personagem(){
	this->idade = 0;
	this->nItens = 0;
	
	delete this->itens;
	
	string* ptr = &nome;
	delete ptr;
	
	
	Data* ptr2 = &dataAtual;
	delete ptr2;
}

	
void Personagem::setIdade(int idade){
	if(idade > 0)
		this->idade = idade;
	else
		return;
}


void Personagem::setNome(const string &nome){
	if(nome.length() < 100 && nome.length() > 1)
		this-> nome = nome;
	else
		return;
	
}

int Personagem::getIdade(){
	return this->idade;
}


string Personagem::getNome(){
	return this->nome;
}

Item *Personagem::getItens() {
	return this->itens;
}

void Personagem::removerItem(int opcao){
	Item* aux = new Item[(this->nItens -1)];
	int j = 0;
	
	for (int i = 0; i < this->nItens; ++i) {
		if (i != opcao){
			aux[j] = this->itens[i];
			j++;
		}
	}
	
	delete [] this->itens;
	
	itens = new Item[--this->nItens];
	
	for (int i = 0; i < this->nItens-1; ++i) {
		this->itens[i] = aux[i];
	}
	
	delete [] aux;
}

void Personagem::adicionarItem(const Item &item) {
	Item* aux = new Item[this->nItens];

	for (int i = 0; i < this->nItens; ++i) {
		aux[i] = this->itens[i];
	}

	delete [] this->itens;

	itens = new Item[++this->nItens];

	for (int i = 0; i < this->nItens-1; ++i) {
		this->itens[i] = aux[i];
	}

	this->itens[this->nItens - 1] = item;

	delete [] aux;
}

void Personagem::mostrarDia() const{
    cout << "O dia atual e: ";
    dataAtual.imprimir();
}
ostream &operator<<(ostream &output, const Personagem &p2){
	
	output << "Sua idade e" << idade.idade;
	
	return output;
}
bool Personagem::operator==(const Personagem &p2 ) const
{
	if ( this->nItens != p2.nItens )
	return false;
	
	if ( this->nome != p2.nome )
	return false;
	
	if ( this->idade != p2.idade )
	return false;
	return true;
}

bool Personagem::operator!=( const Personagem &p2 ) const
{
	return ! ( *this == p2);
}

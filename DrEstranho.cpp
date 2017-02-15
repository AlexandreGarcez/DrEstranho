#include "DrEstranho.h"
#include <iostream>
#include "Data.h"

using namespace std;

int DrEstranho::nDr = 0;


DrEstranho::DrEstranho():dataAtual(19, 9, 1987){
	this->idade = 30;
	this->mana = 500;
	this->nome = "Titi";
	this->itens = new Item[0];
	this->nItens = 0;

	DrEstranho::nDr = DrEstranho::nDr + 1;
}

DrEstranho::DrEstranho(int idade, int mana, const string &nome):dataAtual(19, 9, 1987){
	if(idade > 0)
		this->idade = idade;
	else
		this->idade = 30;
	if(mana >0)
		this->mana = mana;
	else
		this->mana = 500;	
	if(nome.length() < 100 && nome.length() > 1)
		this->nome = nome;
	else
		this->nome = "Stephen Vicent Strange";

	this->nItens = 0;

	this->itens = new Item[nItens];

	DrEstranho::nDr = DrEstranho::nDr + 1;
}

DrEstranho::DrEstranho(const DrEstranho &d):dataAtual(19, 9, 1987){
	this->idade = d.idade;
	this->mana = d.mana;
	this->nome = d.nome;
	this->itens = d.itens;
	this->nItens = d.nItens;
	
	DrEstranho::nDr = DrEstranho::nDr + 1;
}

DrEstranho::~DrEstranho(){
	this->idade = 0;
	this->mana = 0;
	this->nItens = 0;
	
	delete this->itens;
	
	string* ptr = &nome;
	delete ptr;
	
	
	Data* ptr2 = &dataAtual;
	delete ptr2;
}

void DrEstranho::barganhar(){
		int opcao;
		
		do{		
			cout << "\n\n         ** DORMAMMU, EU VIM BARGANHAR!! **";
			
			cout << "\n (Dormammu aceitou barganhar? Digite 1 para 'sim' ou 2 para 'nao')";
			cin >> opcao;
			
			switch(opcao){
				case 1:
					cout << "\n Parabens, voce salvou o seu universo. ";
					break;
				case 2:
					cout << "\n Voce foi morto de uma forma bizarra por Dormammu.";
					break;
				default:
					cout << "\n Digite 'sim' ou 'nao' para barganhar (ou nao).";
					break;
			}
			
		}while(opcao != 1);
		
	}

void DrEstranho::usarHabilidade(){
	int opcao;
	do{
		cout << "\n\n Escolha a magia: \n 1 - Telepatia \n 2 - Telecinese \n 3 - Hipnose \n 4 - Banimento \n 5 - Sair";
		cin>> opcao;
		
		switch(opcao){
		case 1:
			cout << "\n Usou telepatia.";
			break;
		case 2:
			cout << "\n Usou telecinese";
			break;
		case 3:
			cout << "\n Usou hipnose.";
			break;
		case 4: 
			cout << "\n Usou banimento.";
			break;
		case 5:
			break;
		default:
			cout << "\n Insira uma opcao valida.";
		}
					
	}while(opcao != 5);
}
	
void DrEstranho::setIdade(int idade){
	if(idade > 0)
		this->idade = idade;
	else
		return;
}

void DrEstranho::setMana(int mana){
	if(mana > 0)
		this->mana = mana;
	else
		return;
}

void DrEstranho::setNome(const string &nome){
	if(nome.length() < 100 && nome.length() > 1)
		this-> nome = nome;
	else
		return;
	
}

int DrEstranho::getIdade(){
	return this->idade;
}

int DrEstranho::getMana(){
	return this->mana;
}

string DrEstranho::getNome(){
	return this->nome;
}

Item *DrEstranho::getItens() {
	return this->itens;
}

void DrEstranho::removerItem(int opcao){
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

void DrEstranho::adicionarItem(const Item &item) {
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

void DrEstranho::mostrarDia() const{
    cout << "O dia atual e: ";
    dataAtual.imprimir();
}
ostream &operator<<(ostream &output, const DrEstranho &manainicial){
	
	output << "Seu mana inicial é" << manainicial.mana;
	
	return output;
}
bool DrEstranho::operator==(const DrEstranho &dr1 ) const
{
	if ( this->nItens != dr1.nItens )
	return false;
	
	if ( this->mana != dr1.mana )
	return false;
	
	if ( this->nome != dr1.nome )
	return false;
	
	if ( this->idade != dr1.idade )
	return false;
	return true;
}

bool DrEstranho::operator!=( const DrEstranho &dr1 ) const
{
	return ! ( *this == dr1);
}

const int DrEstranho::Dimensoes= 3;

int DrEstranho::NumeroDimensoes= DrEstranho::Dimensoes;

void DrEstranho::DimensaoAtual(){
	cout << "Sua dimensao atual e : " << NumeroDimensoes; 
	
}

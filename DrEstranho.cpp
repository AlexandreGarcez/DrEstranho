#include "DrEstranho.h"
#include <iostream>

using namespace std;

int DrEstranho::nDr = 0;

DrEstranho::DrEstranho(){
	this->idade = 30;
	this->mana = 500;
	this->nome = "Titi";
	this->itens = new Item[0];
	this->nItens = 0;

	DrEstranho::nDr = DrEstranho::nDr + 1;
}

DrEstranho::DrEstranho(int idade, int mana, const string &nome){
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

DrEstranho::DrEstranho(const DrEstranho &d){
	this->idade = d.idade;
	this->mana = d.mana;
	this->nome = d.nome;
	this->itens = d.itens;
	this->nItens = d.nItens;

	DrEstranho::nDr = DrEstranho::nDr + 1;
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




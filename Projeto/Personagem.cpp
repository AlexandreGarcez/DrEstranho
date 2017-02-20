#include "DrEstranho.h"
#include <iostream>
#include "Data.h"

using namespace std;




Personagem::Personagem():dataAtual(19, 9, 1987){
	this->idade = 30;
	this->nome = "Nome do Personagem";
	this->itens = new Item[0];
	this->nItens = 0;

}

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
	this->mana = p2.mana;
	this->nome = p2.nome;
	this->itens = p2.itens;
	this->nItens = p2.nItens;
	
}

void DrEstranho::setIdade(int idade){
	if(idade > 0)
		this->idade = idade;
	else
		return;
}

void DrEstranho::setNome(const string &nome){
	if(nome.length() < 100 && nome.length() > 1)
		this-> nome = nome;
	else
		return;
	
}


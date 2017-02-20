#include "DrEstranho.h"
#include <iostream>
#include "Data.h"

using namespace std;




Mago::Mago(int idade, int mana, const string &nome){
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

}

Mago::Mago(const Mago &mago2){

	this->mana = mago2.mana;
	
}

Mago::~Mago(){
	this->mana = 0;
	
}


void Mago::usarMagia(){
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
	

void Mago::setMana(int mana){
	if(mana > 0)
		this->mana = mana;
	else
		return;
}


int DrEstranho::getMana(){
	return this->mana;
}


ostream &operator<<(ostream &output, const Mago &mago2){
	
	output << "Seu mana inicial é" << mago2.mana;
	
	return output;
}
bool Mago::operator==(const Mago &mago2 ) const
{

	if ( this->mana != mago2.mana )
	return false;

	return true;
}

bool Mago::operator!=( const Mago &mago2 ) const
{
	return ! ( *this == mago2);
}

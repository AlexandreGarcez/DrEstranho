#include "DrEstranho.h"
#include <iostream>
#include "Data.h"
#include "Mago.h"

using namespace std;

int DrEstranho::nDr = 0;


DrEstranho::DrEstranho() : Mago(33, 500, "Stephen Vicent Strange"){
	DrEstranho::nDr = DrEstranho::nDr + 1;
}

DrEstranho::DrEstranho(int idade, int mana, const string &nome): Mago(idade, nama, nome){
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

void DrEstranho::usarMagia(){
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
	



void DrEstranho::mostrarDia() const{
    cout << "O dia atual e: ";
    dataAtual.imprimir();
}
ostream &operator<<(ostream &output, const DrEstranho &dr1){
	
	output << static_cast <Mago> (dr1); 
	
	output << "Dimensao atual: " << dr1.Dimensoes;
		
	
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
	
	if (static_cast<Mago&> (*this) != static_cast <Mago>(dr1)
	return false;
	
	
	return true;
	
	
}

bool DrEstranho::operator!=( const DrEstranho &dr1 ) const
{
	return ! ( *this == dr1);
	static_cast<Mago&> (*this) != static_cast <Mago>(dr1);
}

void DrEstranho::operator=(const DrEstranho &dr1){
	static_cast<Mago&> (*this) = static_cast <Mago>(dr1);
    this->Dimensoes = dr1.Dimensoes;
}



const int DrEstranho::Dimensoes= 3;

int DrEstranho::NumeroDimensoes= DrEstranho::Dimensoes;

void DrEstranho::DimensaoAtual(){
	cout << "Sua dimensao atual e : " << NumeroDimensoes; 
	
}


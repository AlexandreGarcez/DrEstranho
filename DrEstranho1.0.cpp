// Dr. Strange
#include <iostream>

using namespace std; // Estrutura do C++ que evita ter que colocar std:: antes do cout, cin , etc.


class DrEstranho // Nome da Classe
{
public:	
	void barganhar() // Nome do método
	{
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
	
};

int main(){
	
	int opcao;  
	
	DrEstranho myDrEstranho;
	
	do{
		
		cout << "\n Voce esta enfrentando Dormammu. Sua unica opcao e barganhar. Digite 1 para 'sim' ou 2 para 'nao' ";
		cin >> opcao; 
		
		switch(opcao){
			case 1:
			myDrEstranho.barganhar();	
			break;
			
			case 2:
				cout << "\n Voce foi morto de uma forma bizarra por Dormammu. ";
				break;
				
			default:
				cout <<"\n Digite 'sim' ou 'nao' para barganhar (ou nao). ";
				break;
		}
	}while(opcao != 1);
	
	return 0;
}

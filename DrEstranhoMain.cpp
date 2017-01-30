// Dr. Strange
#include <iostream>
#include "DrEstranho.cpp"

using namespace std; // Estrutura do C++ que evita ter que colocar std:: antes do cout, cin , etc.




int main(){
	
	int opcao;  
	
	DrEstranho myDrEstranho(90, 500000, "CHOPP DE AÇAÍ");
	
	DrEstranho myDrEstranho2(myDrEstranho);
	
	do{
		
		cout << "Nome: " << myDrEstranho.getNome() << ", idade: " << myDrEstranho.getIdade() << ", mana: " << myDrEstranho.getMana();
		
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

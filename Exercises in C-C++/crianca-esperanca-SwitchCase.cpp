#include <iostream>
#include <locale>

using namespace std;


int main(int argc, char** argv) {

setlocale(LC_ALL, "ptb");
	int doa, valor;	// doa = valor padrão das doações.
					// valor = valor de doação de livre escolha do usuário ( doador )
	
	cout <<"------------------------------------\n";
	 
	cout <<"     CRIANÇA ESPERANÇA   \n";
	
	cout <<"------------------------------------\n";
	
	cout <<"Muito obrigado por nos ajudar !!! \n";
	cout <<"[1] para doar R$10 \n";
	cout <<"[2] para doar R$25\n";
	cout <<"[3] para doar R$50\n";
	cout <<"[4] para doar outros valores\n";
	cout <<"[5] para cancelar \n";
	cin>>doa;
	
  	cout <<"------------------------------------\n";
  	
  	switch (doa){
  		case 1:
  			valor =10;
  			break;
  		case 2:
		  	valor = 25;
		  	break;
		case 3:
			valor = 50;
			break;
		case 4:
			cout<<"Qual valor da doação? \n";
			cin>>valor;
			break;
		case 5: valor = 0;
			break;
			
		default:
			cout<<"Opcao invalida"<<endl;
			break;
	  }
  	
  	
  	cout <<"Sua doação foi de R$ "<<valor<<" "<<endl;
  	cout <<"Muito obrigado pela sua doação !!! \n";
	cout <<"------------------------------------\n";
	system("pause");
	
	return 0;

	}


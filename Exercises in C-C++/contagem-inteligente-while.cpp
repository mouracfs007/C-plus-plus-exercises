#include <iostream>
#include <locale>

using namespace std;

int main() {

setlocale(LC_ALL, "ptb");
	int i, f; // i = início  ##---## f= fim
	
	cout <<"------------------------------------\n";
	cout<<"  CONTAGEM INTELIGENTE   "<<endl;
	cout <<"------------------------------------\n";
	
	cout<<"Início:"<<endl; // inicio de contagem
	cin>>i;
	
	cout<<"Fim:"<<endl; // fim de contagem
	cin>>f; 
	
	cout<<"  CONTANDO...  "<<endl;
	
	// verificando se o inicio é menor ou igual ao fim. Contagem progressiva.
	while(i <=f ){ 
		if (i<= f){
			cout<<i<<endl;
			i = i +1; // inicio recebe inicio + 1: Progressiva
		}
	
		 
		}
	// Verificando se o inicio da fila é maior ou igual ao fim. Contagem regressiva.
	while (i>=f){
		if (i >= f){
			cout<<i<<endl;
			i = i -1; // inicio recebe inicio - 1:  Regressiva
	}

	}		

	system("pause");	
	return 0;
		
	}
#include <iostream>
#include <locale>

// Tabuada para qualquer número

using namespace std;


int main() {

setlocale(LC_ALL, "ptb");
	int contador, num, res;
	// contador = contador da estrutura while.
	// num = número que deseja fazer a tabuada.
	// res = resultado que guardará o contador *(vezes ) o número da tabuada.
	
	cout<<"Você deseja ver a tabuada de qual número?"<<endl;
	cin>>num;
	
	 // enquanto o contador for menor ou igual a 10 , execute o laço.
	while(contador <=10){
		
		res = num * contador;
		
		cout<<num<<"x"<<contador<<"="<<res<<endl; // numero da tabuada + contador + resultado da tabuada.
		
	 contador++;	
	}

system("pause");
	
	return 0;
	}
	
	
	

	
	   
	

	


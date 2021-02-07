#include <iostream>

// Exemplo do uso de um vetor em C++ - unidimensional
using namespace std;

int main(int argc, char** argv) {
	
	int TAM = 7; // TAM = Tamanho do vetor recebe 7
	
	int vetor [TAM];
	
	cout<<"Entre com o tamanho do vetor"<<endl;
	cin>>TAM; // vetor recebeu o valor 7
	

	// declarado o indexador dentro do for ' i '
	for(int i= 0; i <= TAM; i++){  // enquanto i que recebeu 0 for menor ou igual a 7
	    cout<<"Entre com o valor do elemento"<< i << endl;
		cin>> vetor [i];	
	}
	
	cout<<"Imprimindo o vetor..."<<endl;
	for(int i=0; i < TAM; i++){
		
		// Verificando os elementos (valores ) pares do vetor
		if( vetor [TAM]%2 ==0  ){
		cout<< vetor [TAM] <<endl;
		}
	}

	
	return 0;
}
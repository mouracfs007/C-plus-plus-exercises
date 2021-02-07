#include <iostream>
							// soma de matrizes //
using namespace std;

int main(int argc, char** argv) {

 int A [2][2];    // 3 matrizes bidimensionais 2x2 - dois por dois, 2 linhhas e 2 colunas
 int B [2][2];
 int C [2][2];
					// for para ler os elementos de uma matriz.
 	for( int i=0; i < 2; i++ ){
 		for(int j=0; j < 2; j++ ){
 			cout<<"Entre com os elementos: "<< i << "," << j << " Da matriz A"<<endl;
 			cin>> A [i][j];
 			
 			cout<<"Entre com os elementos: "<< i << "," << j << " Da matriz B"<<endl;
 			cin>> B [i][j];
 			
 			C [i][j] = A[i][j] + B [i][j]; // somando matriz A e B, e armazenando os valores na matriz C
		 }
 		
	 }

		cout<<"Dados da matriz"<<endl;
	// imprimindo os dados da matriz
	for(int i=0; i < 2; i++ ){
		for (int j=0; j < 2; j++ ){
			cout <<C[i][j] << " ";		
		}

		cout<<endl;
	}
	
	return 0;
}
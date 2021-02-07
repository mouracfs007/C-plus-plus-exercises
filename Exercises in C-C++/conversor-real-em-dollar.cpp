#include <iostream>
#include <locale>

using namespace std;

int main() {

setlocale(LC_ALL, "ptb");
	float real, dollar; 
	int cont, quant; // cont= contador do while / quant= quantidade de vezes que fará a conversões do real em dollar.
	cont = 1;
	
	cout<<"Quantas vezes você quer converter?"<<endl;
	cin>>quant; 

	// enquanto o contador for menor ou igual a quantidade de vezes da conversão
	while(cont <=quant){
		cout<<"Qual o valor em R$?:"<<endl;
		cin>>real;
		dollar = real/5.50; // cotação do dollar em 2021.
		cout<<"O valor convertido é US$:"<<" "<<dollar<<endl;
		cont = cont +1;
	}
	
	return 0;

	}
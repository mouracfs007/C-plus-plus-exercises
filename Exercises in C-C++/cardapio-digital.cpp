#include <iostream>

using namespace std;

	// Cardápio Digital com if 
int main(int argc, char** argv) {
	
	int opcao = -1; // opção do cardápio
	
	
	while ( opcao != 6 ) {
		
	cout<<"Cardapio do dia. Seja bem vindo !!!"<<endl;
		
	cout<<"opcao 1- carne"<<endl;
	cout<<"opcao 2- frango"<<endl;
	cout<<"opcao 3- legumes"<<endl;
	cout<<"opcao 4- sobremesas"<<endl;
	cout<<"opcao 5- bebidas"<<endl;
	cout<<"opcao 6- sair do cardapio!!!!"<<endl;
	

	// escolhendo a opção disponível para seleção do cardápio
	cout<<"Escolha as opcoes do nosso cardapio !!! "<<endl;
	cin>> opcao;
	
	if(opcao == 1 ) {
		cout<<"Carne: 7.99 $ !!!"<<endl;
	}
	if(opcao == 2){
		cout<<"Frango: 3.85  !!"<<endl;
	}
	if(opcao == 3){
		cout<<"Legumes: 4.99 !!"<<endl;
	}
	if(opcao== 4){
		cout<<"Sobremesa: 1.00 !!"<<endl;
	}
	if(opcao== 5){
		cout<<"Bebidas: 2.99 !"<<endl;
	}
	if(opcao== 6){
		cout<<"Obrigado volte sempre !!!!"<<endl;
	}	
	}	

	return 0;
	}

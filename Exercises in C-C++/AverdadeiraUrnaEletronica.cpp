#include <iostream>

 // Verificando a "Veracidade" de uma Urna eletrônica no Brasil #ironic
using namespace std;

int main(int argc, char** argv) {
	
	int voto, x; // x = confirmação de voto  / variavel voto = numero do canditado.
	
	cout<<"Seja bem vindo a nossa URNA Eletronica !!!"<<endl;
	
	cout<<"Entre com o seu voto:"<<endl;
	cin>>voto;
	cout<<"Candidato Varselios Klaus : N- 50"<<endl;
	cout<<"Canditado Marcelo Freitas : N- 80"<<endl;
	
	cout<<"Deseja prosseguir com seu voto:"<<endl;
	
	cout<<"Digite 1 para sim e 2 para nao:"<<endl;
	cin>>x;	
	
	if(voto <= 50  // verifica se o candidato igual ou menor que 50 computará o voto
	 ){
		cout<<"Candidato Varselios Klaus: partido PMME!!"<<endl;
	}
	
	if ( voto >= 80  ){     // verifica se o candidato  maior ou igual que 80 computará o voto
		cout<<"Candidato Marcelo Freitas: partido PSVM !!"<<endl;
	}
	 
	if(voto == 0 ){  // Verifica um voto em branco
		cout<<"Voto em branco !!"<<endl;
	}
	
	else{
		cout<<"Obrigado volte sempre !!"<<endl;

	}
	
	return 0; 
}
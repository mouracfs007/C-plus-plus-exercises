#include <iostream>

using namespace std;

struct  t_pilha{
	int topo; // variável para o topo da pilha.
	int elementos[10]; // número de posições da pilha (elementos que podem caber) , 10
	
}typedef pilha;

// COMO INSERIR NA PILHA?

int empilhar (pilha *p, int valor) {
	
	if (p->topo == 9){
		return 0; // RETORNANDO UM ERRO
		}
		cout<<"pilha cheia"<<endl;

	// incrementando um elemento na pilha
	p->topo = p->topo +1;
	p->elementos  [p->topo] = valor;
		return 1; // CONSEGUI EMPILHAR
}


// COMO RETIRAR DA PILHA ?
int desempilhar (pilha *p){
	if (p->topo == -1){
		return 0; // INDICA QUE A PILHA ESTÁ CHEIA	
   }
		int valor = p->elementos [p->topo];
		p->topo = p->topo -1;
		return valor; // 
		cout<<"pilha vazia"<<endl;

}


int main(int argc, char** argv) {
	
	pilha p1; // variavel p1 do tipo pilha
	
	p1.topo = -1; // inicio da pilha (pilha vazia )
	
	// Empilhando a pilha, famoso push...
	empilhar(&p1, 10);
	empilhar(&p1, 20);


	// desempilhando uma pilha, famoso pull...
	desempilhar(&p1);
	desempilhar(&p1);
	

	cout<<"Imprimindo o valor da pilha !!!"<<endl; // imprimindo os elementos da pilha

	cout<<empilhar(&p1, 10)<<endl;
	cout<<empilhar(&p1, 20)<<endl;
	cout<<empilhar(&p1, 30)<<endl;
	cout<<empilhar(&p1, 40)<<endl;
	cout<<empilhar(&p1, 50)<<endl;
	cout<<empilhar(&p1, 60)<<endl;
	cout<<empilhar(&p1, 70)<<endl;
	cout<<empilhar(&p1, 80)<<endl;
	cout<<empilhar(&p1, 90)<<endl;
	cout<<empilhar(&p1, 110)<<endl;


	return 0;
}
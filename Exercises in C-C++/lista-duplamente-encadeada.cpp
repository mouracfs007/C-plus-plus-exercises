#include <cstdlib>
#include <iostream>

using namespace std;

struct t_lista{
	int chave;

struct t_lista *prox; // variavel ponteiro  para apontar pro próximo nó da lista

struct t_lista *ant; // variável ponteiro para apontar para anterior da lista.
} typedef lista;

void inserir (lista **cabeca, int chave){

lista *no = (lista *) malloc (sizeof(lista)); // lista recebendo alocação de memória.

	no->ant = NULL;
	
	no->prox = NULL;

	no->chave = chave;

	if (*cabeca == NULL){   //O primeiro Nó
		*cabeca = no;
	}	
	else{   //Ou já existe outro nó
		lista *temp = *cabeca;
	while (temp->prox != NULL){
	temp = temp->prox;
	}	
	temp->prox = no;
	}

}
 // função para imprimir na lista
void imprimir (lista **cabeca){
	lista *temp = *cabeca;
while (temp != NULL){
	cout<<temp->chave<<endl;
	temp = temp->prox;
}

}
 // função para buscar na lista
lista * buscar (lista **cabeca, int chave){

lista *temp = *cabeca;

while (temp){

	if (temp->chave == chave){

	return temp;

}

temp = temp->prox;

}

return NULL;

}
 // função para excluir da lista
int excluir (lista **cabeca, int chave){

lista *temp = *cabeca;

lista *ant = NULL;

while (temp != NULL){

	if (temp->chave == chave){

	if (ant != NULL){

		ant->prox = temp->prox;

	}
	else{ //Está removendo o primeiro elemento!

		*cabeca = NULL; //Como fazer para cabeça apontar para o próximo nó válido?

	}	

free (temp); // liberando o temp
temp = NULL;

return 1;

}

	else{
		ant = temp;
		temp = temp->prox;

	}

}

return 0;

}

int main(int argc, char *argv[]){
lista *cabeca;

cabeca = NULL;
 // inserindo elementos na lista
inserir (&cabeca, 10);
inserir (&cabeca, 20);
inserir (&cabeca, 30);


// imprimindo elemento na lista
imprimir(&cabeca);

 return EXIT_SUCCESS;

}
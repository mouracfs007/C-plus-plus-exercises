#include <iostream>

 using namespace std;

 struct t_fila{

 int elementos [5]; // numero das posições (elementos ) da fila

 int frente; // frente da fila

 int tras; // parte traseira da fila

 int qtd; // quantidade 

 }typedef fila; // adicionando um apelido para a variavel t_fila com a função typedef



int enfileirar(fila *f, int valor){ // declarando um ponteiro para a fila e um valor int (inteiro ).

 if (f->qtd == 5){ //minha fila está cheia

 return 0;

 }

 f->elementos [f->tras]=valor;

 f->tras = f->tras == 4 ? 0 : f->tras +1; // operador ternário

 //f->tras++; //f->tras = f->tras +1

 f->qtd++;

 return 1;

 }



int desenfileirar (fila *f){

 if (f->qtd == 0){ //a fila já está vazia

 return 0;

 }

 int valor = f->elementos [f->frente];

 f->frente = f->frente == 4? 0 : f->frente +1;

 //f->frente++;

 f->qtd--;

 return valor;

 }



int main(int argc, char** argv) {

 fila f;

 f.frente = 0;

 f.tras = 0;

 f.qtd=0;

// Como enfileirar ? - pegar a variavel f que vai representar um ponteiro pra fila + um valor int

 enfileirar (&f, 10);

 enfileirar (&f, 20);

 enfileirar (&f, 30);

 enfileirar (&f, 40);

 enfileirar (&f, 50);

// Como desenfileirar ? - apenas vai pegar o ponteiro para fila f.
 cout<< desenfileirar (&f) << endl;

 cout<< desenfileirar (&f) << endl;

 cout<< desenfileirar (&f) << endl;

 cout<< desenfileirar (&f) << endl;

 cout<< desenfileirar (&f) << endl;


 return 0;

 }

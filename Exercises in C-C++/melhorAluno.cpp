#include <iostream>
#include <locale>
// Imprimeiro apenas o melhor aluno da turma com a maior nota
using namespace std;

int main() {

setlocale(LC_ALL, "ptb");
	int total, cont; // total = quantos alunos tem na turma / cont = contador do while
	string nome, melhorAluno;
	float nota, maiorNota;
	
	cout<<"------------------------------------"<<endl;
	cout<<"  Colégio Santa paciência   "<<endl;
	cout<<"------------------------------------\n";
	
	cout<<"Quantos alunos tem na turma?"<<endl;
	cin>>total;
	
	cont = 1; 

	while(cont <= total ){
		cout <<"-----------\n";
		cout <<"AlUNO\n"<<cont<<endl;
		cout <<"Digite o nome do aluno\n";
		cin>>nome;
		
		cout <<"Qual a nota de "<<nome<<"? :"<<endl;
		cin>>nota;
	
		if (nota > maiorNota){
			maiorNota = nota;
			melhorAluno = nome;	
		}
		cont = cont +1;
		}
	cout<<"O melhor aproveitamento foi do"<<" "<< melhorAluno<<" com a nota de "<< maiorNota<<endl;

	system("pause");	
	return 0;
		
}
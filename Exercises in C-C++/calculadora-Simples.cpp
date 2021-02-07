#include <iostream>
#include <locale>

// Calculadora simples: faz operações de adição, subtração, multiplicação e divisão //

using namespace std;
 

int main(int argc, char** argv) {

setlocale(LC_ALL, "ptb");
	
	float num1, num2, resultado; // num1 = primeiro numero informado - num2 = segundo número informado
								// resultado = guarda o produto das operações aritmédicas num1 + num2
  	
	
	int op; // op = opção para escolher qual operação será aplicada.

  	cout <<"Informe o 1o. número: ";

  	cin >>num1;

  	cout <<"Informe o 2o. número: ";

  	cin >>num2;

  	cout <<"------------------------------------\n";

  	cout <<"Escolha a operação matemática: \n";

  	cout <<"1 - Adição\n";

  	cout <<"2 - Subtração\n";

  	cout <<"3 - Divisão\n";

  	cout <<"4 - Multiplicação\n";

  	cout <<"Opção: ";

  	cin >>op;

  	if (op==1)

  	{
	// soma de num1 + num2
    resultado=num1+num2;

    cout <<num1 << " + " << num2 << " = " << resultado<<endl; 

  }

  	else if (op==2)

  {

    resultado=num1-num2;
	// subtração de num1 e num2
    cout <<num1 << " - " << num2 << " = " << resultado<<endl;

  }

  	else if (op==3)

  {
	// divisão entre num1 e num2
    resultado=num1/num2;

    cout <<num1 << " / " << num2 << " = " << resultado<<endl;

  }

  	else if (op==4)

  {
	// multiplicação de num1 e num2
    resultado=num1*num2;

    cout <<num1 << " * " << num2 << " = " << resultado<<endl;

  }

  	else

  {
	  // caso não seja nenhuma das opções, dará o "opção inválida"
    cout <<"Opção inválida!!!";

  }

	
	system("pause");
	
	return 0;

	}


#include <iostream>
#include <locale>

// Partida da champions utilizando estrutura Switch case


using namespace std;


int main(int argc, char** argv) {

setlocale(LC_ALL, "ptb");
	
	int T1,T2,diferenca; // T1 = primeiro time ---> exemplo: Barcelona. 
						// T2 = segundo time --->  exemplo: Real Madrid.
						// diferenca = diferença de gols da partida.
	
	cout <<"------------------------------------\n";
	 
	cout <<"    FINAL DA UEFA CHAMPIONS LEAGUE   \n";
	
	cout <<"   Barcelona x Real Madrid   \n";
	
	cout <<"------------------------------------\n";
	
	cout <<"Quantos gols fez o Barcelona? \n";
	cin>>T1;
	
	cout <<"Quantos gols fez o Real Madrid \n";
	cin>>T2;
	
	diferenca = T1 - T2; // diferenca recebe primeiro time menos o segundo time.
	
  	cout <<"------------------------------------\n";
  	
  	switch (diferenca){
  		case 0:
  			diferenca == 0;
  			cout<<"Status: EMPATE"<<endl;
  			break;
		case 4:
		  	diferenca >=4 ;
		  	cout<<"Status: GOLEADA!!"<<endl;
		  	break;
		case 3:
			diferenca >= 3;
			cout<<"Status: JOGO NORMAL"<<endl;
			break;	
	   }
  		cout<<"DIFERENÇA"<<" "<<diferenca<<endl;
  	
	system("pause");
	
	return 0;

	}


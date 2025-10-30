#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int populacao, bio, reg, idosobio, idosoreg;
	
	//entrada
	cin>>populacao;
	
	//operacao
	bio=populacao*0.11;
	idosobio=bio/3;
	reg=bio-(bio*0.27);
	idosoreg=reg/4;
	
	//saidaArquivo
	ofstream escrever("saida.txt");
	escrever<<bio<<endl;
	escrever<<reg<<endl;
	escrever<<idosobio<<endl;
	escrever<<idosoreg<<endl;
	escrever.close();
	
	return 0;
}

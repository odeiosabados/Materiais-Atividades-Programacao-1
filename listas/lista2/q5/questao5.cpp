#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//entrada
	float dinheiro,Valorconvite;
	int Quantconvite;
	
	//arquivoDeEntrada
	ifstream orcamento("teatro.txt");
	orcamento>>dinheiro>>Valorconvite;
	orcamento.close();
	
	//operacao
	Quantconvite=(dinheiro/Valorconvite)+1;
	
	//arquivoDeSaida
	ofstream QConv("convite.txt");
	QConv<<Quantconvite;
	QConv.close();
	
	//saida
	cout<<Quantconvite;
	
	return 0;
	
}

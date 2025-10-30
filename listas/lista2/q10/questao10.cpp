#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int hora, minuto, a, b, c;
	
	//entrada
	cin>>hora>>minuto;
	
	//operacao
	a=hora*60;
	b=minuto+a;
	c=b*60;
	
	//saidaArquivo
	
	ofstream escrever("saida.txt");
	escrever<<a<<endl;
	escrever<<b<<endl;
	escrever<<c<<endl;
	escrever.close();
	
	return 0;
}

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
	float degraus, alturadegrau, alturatotal;
	
	
	//leituraArquivo
	ifstream ler("entrada.txt");
	ler>>alturadegrau>>alturatotal;
	ler.close();
	
	//operacao
	alturatotal=alturatotal*100;
	degraus=alturatotal/alturadegrau;
	cout<<ceil(degraus);
	
	return 0;
}

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//entrada
	string nome1,nome2,nome3,conteudo,conteudo2;
	cin>>na1>>na2;
	
	//primeiro arquivo
	ifstream arq1(nome1);
	arq1>>conteudo;
	arq1.close();
	
	//segundo arquivo
	ifstream arq2(nome2);
	arq2>>conteudo2;
	arq2.close();
	
	//terceiro arquivo
	ofstream arq3(nome3);
	arq3<<conteudo<<" "<<conteudo2;
	arq3.close();
	
	return 0;
	
}


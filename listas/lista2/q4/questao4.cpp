#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//entrada
	string na1,na2,conteudo,conteudo2;
	cin>>na1>>na2;
	
	//primeiro arquivo
	ifstream arq1(na1);
	arq1>>conteudo;
	arq1.close();
	
	//segundo arquivo
	ifstream arq2(na2);
	arq2>>conteudo2;
	arq2.close();
	
	//terceiro arquivo
	ofstream arq3("arquivo3.txt");
	arq3<<conteudo<<" "<<conteudo2;
	arq3.close();
	
	return 0;
	
}

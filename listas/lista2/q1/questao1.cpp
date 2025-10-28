#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	string nomedoarquivo,conteudo;
	cin>>nomedoarquivo;
	
	ifstream arquivo(nomedoarquivo);
	arquivo>>conteudo;
	arquivo.close();

	cout<<conteudo;
	
	return 0;
}


#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	string nomedoarquivo, conteudo;
	cin>>nomedoarquivo>>conteudo;

	ofstream arquivo(nomedoarquivo);
	arquivo<<conteudo;
	
	arquivo.close();
	return 0;	
}


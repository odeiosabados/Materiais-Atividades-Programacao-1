#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	//entrada
	float C, K, F;
	
	cout<<"digite a temperatura em celsius: ";
	cin>>C;
	
	//operacoes
	K=C+273;
	F=(C*1.8)+32;
	
	//arquivo
	ofstream arquivo("temperatura.txt");
	arquivo<<K<<endl<<F;
	arquivo.close();
	
	return 0;
}

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
	//entrada
	float graudecimal;
	int grau, minuto, segundo;
	cin>>graudecimal;
	
	//operacoes
	grau=graudecimal;
	minuto=abs(graudecimal-grau)*60;
	segundo=((abs(graudecimal-grau)*60)-minuto)*60;
	
	//saida
	cout<<grau<<endl;
	cout<<minuto<<endl;
	cout<<segundo<<endl;
	
	//saida arquivo
	ofstream arq("coordenadas.txt");
	arq<<grau<<endl;
	arq<<minuto<<endl;
	arq<<segundo<<endl;
	arq.close();
	
	return 0;
}


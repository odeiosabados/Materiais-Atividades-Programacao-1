#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//entrada
	float salario, novosalario;
	ifstream arquivo_entrada("salario.txt");
	arquivo_entrada>>salario;
	
	//operacao
	novosalario=salario+(salario*0.25);
	
	//saida
	cout<<novosalario;
	
	return 0;
	
}

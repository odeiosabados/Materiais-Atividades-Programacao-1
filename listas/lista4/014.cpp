#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int filhos, filhostotal = 0, salariototal = 0, num_pessoas = 0, miseria = 0;
	float salario, maior = 0;
	ifstream ler;
	
	ler.open("pesquisa.txt");
	
	while (ler >> salario >> filhos) {
		filhostotal += filhos;
		salariototal += salario;
		num_pessoas ++;
		if (salario > maior) {
			maior = salario;
		}
		if (salario <= 1000) {
			miseria ++;
		}	
	}
	
	cout << float (salariototal) / num_pessoas << endl;
	cout << float (filhostotal) / num_pessoas << endl;
	cout << maior << endl;
	cout << (miseria*100.00) / num_pessoas << "%";
	
	return 0;
}

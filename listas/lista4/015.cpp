#include <iostream>
#include <fstream>
using namespace std;

int main() {
	char i;
	int quant = 0;
	string nome;
	ifstream ler;

	cout << "digite o nome do arquivo: ";
	cin >> nome;
	
	ler.open(nome);
	
	while (ler >> i) {
		if (i == 'A' || i == 'a' || i == 'E' || i == 'e' || i == 'I' || i == 'i' || i == 'O' || i == 'o' || i == 'U' || i == 'u') {
			quant ++;
		}
	}
	cout << endl << quant;
	
	return 0;
}

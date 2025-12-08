#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
	
	string chapa1, chapa2, local;
	int voto1, voto2, votc1 = 0, votc2 = 0, total = 0;
	ifstream ler;
	
	ler.open("eleicao.txt");
	
	ler >> chapa1 >> chapa2;
	
	while (ler >> local >> voto1 >> voto2) {
		votc1 += voto1;
		votc2 += voto2;
		total = total + voto1 + voto2;
	}
	
	if (votc1 > votc2) {
		cout << chapa1 << " ";
		cout << votc1 << " ";
		cout << fixed << setprecision(2) <<(100.00*votc1)/total;	
	}
	if (votc2 > votc1) {
		cout << chapa2 << " ";
		cout << votc2 << " ";
		cout << fixed << setprecision(2) <<(100.00*votc2)/total;	
	}
	
	return 0;
}

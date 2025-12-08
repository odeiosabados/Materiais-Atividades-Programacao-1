#include <iostream>
#include <fstream>
using namespace std;

int main() {
	string bruxo1, bruxo2, bruxo3, voto;
	ifstream ler;
	int total, b1 = 0, b2 = 0, b3 = 0, maior = 0;
	
	ler.open("votacao.txt");
	
	ler >> bruxo1 >> bruxo2 >> bruxo3 >> total;
	
	while (ler >> voto) {
		if (voto == bruxo1) {
			b1 ++;
			if (b1 >= maior) {
				maior = b1;
			}
		}
		if (voto == bruxo2) {
			b2 ++;
			if (b2 >= maior) {
				maior = b2;
			}
		}
		if (voto == bruxo3) {
			b3 ++;
			if (b3 >= maior) {
				maior = b3;
			}
		}
	}
	cout << maior;
	
	return 0;
}

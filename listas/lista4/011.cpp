#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int voto, c1 = 0, c2 = 0, c3 = 0, c4 = 0, B = 0, N = 0, total = 0, totalValido = 0;
	ifstream ler;
	
	ler.open("votos.txt");
	
	while (ler >> voto && voto != 0) {
			if (voto == 1) {
				c1++;
				total++;
				totalValido++;
			}
			if (voto == 2) {
				c2++;
				total++;
				totalValido++;
			}
			if (voto == 3) {
				c3++;
				total++;
				totalValido++;
			}
			if (voto == 4) {
				c4++;
				total++;
				totalValido++;
			}
			if (voto == 5) {
				N++;
				total++;
			}
			if (voto == 6) {
				B++;
				total++;
			} 
			
		}
	
	cout << "1: " << c1 << " " << (100.0*c1/total)<<endl;
	cout << "2: " << c2 << " " << (100.0*c2/total)<<endl;
	cout << "3: " << c3 << " " << (100.0*c3/total)<<endl;
	cout << "4: " << c4 << " " << (100.0*c4/total)<<endl;
	cout << "5: " << N << " " << (100.0*N/total)<<endl;
	cout << "6: " << B << " " << (100.0*B/total)<<endl;
	cout << "7: " << totalValido << " " << (100.0*totalValido/total)<<endl;
	
	return 0;
}

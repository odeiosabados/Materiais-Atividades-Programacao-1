#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int num, quantPos = 0, quantNeg = 0, total = 0;
	float cont = 0;
	ifstream ler;
	
	ler.open("numeros.txt");
	
	while (ler >> num && num != 0) {
		cont = cont + num;
		total ++;
		if (num > 0) {
			quantPos ++;
		}
		if (num < 0) {
			quantNeg ++;
		}	
	}
	
	cout << (cont/total) << endl;
	cout << quantPos << " " << quantNeg << endl;
	cout << (quantPos*100.00)/total << "%" << endl;
	cout << (quantNeg*100.00)/total << "%";
	
	return 0;
}

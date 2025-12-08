#include <iostream>
using namespace std;

int main() {
	int ini, fin, cont = 0, i;
	
	cout<<"digite o valor inicial: "<<endl;
	cin>>ini;
	
	cout<<"digite o valor final: "<<endl;
	cin>>fin;
	
	i = ini;
	
	if (ini < fin) {
		while (i >= ini && i <= fin) {
			if (!(i % 2 == 0)) {
				cont = cont + i;
			}
			i++;
		}
		cout<<"soma dos numeros impares: "<<cont;	
	} else {
		cout<<"erro"<<endl;
	}
	
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int ini, fin, soma = 0, mp = 1;
	
	cin>>ini>>fin;
	
	if (ini < fin) {
		while (ini <= fin) {
			if (ini % 2 == 0) {
				soma = soma + ini;
			} else {
				mp = mp * ini;
			}
			ini++;
		}
	} else {
		cout<<"erro";
	}
	
	cout<<soma<<endl;
	cout<<mp<<endl;
	
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	float preco, total;
	int dia;
	char categoria;
	
	cout<<"Digite o valor do preco ";
	cin>>preco;
	cout<<"Digite dia e categoria "<<endl;
	
	while (dia != -1 ){
		cin>>dia>>categoria;
		if (dia>=1 and dia<=13){
			if (categoria=='E')
				total += preco * 0.8; 
			else if (categoria=='A')
				total+= preco  * 0.9; 
		}
		if (dia >= 14) {
			if (categoria=='E')
				total += preco * 0.9; 
			else if (categoria=='A')
				total+= preco  * 0.95; 
		}
	}
	cout<<"Total "<<total<<endl;
    return 0;
}

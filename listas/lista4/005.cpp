#include <iostream>
using namespace std;

int main() {
	int n, maior = 0, menor = 0;
	
	cin>>n;
	
	maior = n;
	menor = n;
	
	while (n >= 0) {
		cin>>n;
		
		//maior
		if (n > maior) {
			maior = n;
		}
		
		//menor
		if (n != -1 && n < menor) {
			menor = n;
		}	
	}
	
	cout<<maior<<endl;
	cout<<menor;
	
	
	
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	
	int n1, n2, cont = 0;
	cin>>n1>>n2;
	
	while (n2 <= n1) {
		cont++;
		n2 = n2 + 2;
	}
	
	cout<<cont;
	
	return 0;
}

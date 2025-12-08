#include <iostream>
using namespace std;

int main() {
	int n, i, soma;
	
	i = 0;
	soma = 0;
	
	while (i < 5) {
		cin>>n;
		soma+=n;
		i++;
	}

	cout<<soma;
	
	return 0;
}

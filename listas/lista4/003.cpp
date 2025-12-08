#include <iostream>
using namespace std;

int main() {
	
	int n, cont = 0, i = 1;
	
	cin>>n;
	
	while (i <= n) {
		if ((n % i) == 0) {
			cont++;
		}
		i++;	
	}
	if (cont == 2) {
		cout<<"EH PRIMO";
	} else {
		cout<<"NAO EH PRIMO";
	}
	
			
return 0;
}

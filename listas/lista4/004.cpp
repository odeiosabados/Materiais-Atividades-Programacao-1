#include <iostream>
using namespace std;

int main() {
	int n, m = 1, i = 1;
	
	cin>>n;
	
	while (i <= n) {
		m = m * i;
		i++;
	}
	
	cout<<m;
	
	
	return 0;
}

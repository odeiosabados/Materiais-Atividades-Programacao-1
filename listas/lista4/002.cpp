#include <iostream>
using namespace std;

int main() {
		
	int n, mp, i;
	mp = 1;
	i = 1;
	
	cin>>n;
	
	if (n >= 1) {
		while (i <= n) {
		mp*=i;
		i++;
		}
		cout<<mp;
	} else {
		cout<<"erro";
	}
	
	return 0;
}

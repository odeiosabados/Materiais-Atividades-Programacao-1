#include <iostream>
using namespace std;

int main() {
	int num = 1, i = 0;
	
	while ((num <= 10) && (i <= 10)) {
		cout << num << " x " << i << " = " << num * i << endl;
		i ++;
		if (i == 11) {
			num ++;
			i = 0;
			cout << endl;
		}
	}
	
	return 0;
}

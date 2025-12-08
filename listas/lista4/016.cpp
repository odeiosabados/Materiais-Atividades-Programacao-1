#include <iostream>
using namespace std;

int main() {
	int num, i = 1;
	string t = "";
	string a = "@";
	string b = "#";
	
	cout << "digite um numero: ";
	cin >> num;
	
	while (i <= num) {
		if (!(i % 2 == 0)) {
			t = t + a;
			cout << t << endl;
		}
		if (i % 2 == 0) {
			t = t + b;
			cout << t << endl;
		}
		i ++;
	}
	
	return 0;
}

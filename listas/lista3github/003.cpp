#include <iostream>

using namespace std;

int main()
{
int numerador, denominador;
cout<<"digite o numerador, em seguida digite o denominador"<<endl;
cin>>numerador>>denominador;

if(denominador==0)
	{
	cout<<"erro";
	}
else
	{
	cout<<"quociente: "<<numerador/denominador<<endl;
	cout<<"resto: "<<numerador%denominador<<endl;
	}

return 0;
}

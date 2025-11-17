#include <iostream>

using namespace std;

int main()
{
float num1, num2;
cin>>num1>>num2;
	
if(num1==num2)
	{
	cout<<"os numeros sao iguais";
	}
else if(num1>num2)
	{
	cout<<num1<<" é maior que "<<num2;
	}
else if(num2>num1)
	{
	cout<<num2<<" é maior que "<<num1;
	}
	
return 0;
}

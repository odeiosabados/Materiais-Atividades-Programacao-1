#include <iostream>

using namespace std;

int main()
{
int a, b, c;
cin>>a>>b>>c;

if(a<(b+c) and b<(c+a) and c<(a+b))
	{
	if(a==b and a==c and b==c)
		{
		cout<<"EQUILATERO";
		}
	if((a==b and a!=c) or (a==c and a!=b) or (b==c and b!=a))
		{
		cout<<"ISOSCELES";
		}
	if(a!=b and a!=c)
		{
		cout<<"ESCALENO";	
		}
	}
	else
		{
		cout<<"INEXISTENTE";
		}

return 0;
}

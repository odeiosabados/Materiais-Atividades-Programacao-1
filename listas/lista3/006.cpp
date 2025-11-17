#include <iostream>

using namespace std;

int main()
{
int a, b, c, d;
cin>>a>>b>>c>>d;

if(a>=1 and b<=1000 and c<=1000 and d<=1000)
	{
	if(a==(b+c+d) and d==(b+c) and b==c)
		{
		cout<<"S";	
		}
		else
			{
			cout<<"N";
			}
	}
	else
	{
	cout<<"valores invalidos";	
	}	

return 0;
}//main

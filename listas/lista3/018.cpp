#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
float i, j, x, y, d; //declaracao

ifstream ler("ataque.txt"); //arquivo
ler>>i>>j>>x>>y;
ler.close();

d=sqrt((pow((x-i),2))+(pow((j-y),2))); //operacao

if(d<300)
	{
	cout<<"ACERTOU";	
	}
	else
		{
		cout<<d;
		}

return 0;	
}

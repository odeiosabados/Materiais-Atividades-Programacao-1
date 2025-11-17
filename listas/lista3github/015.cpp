#include <iostream>

using namespace std;

int main()
{
cout<<"Digite 2 numeros: "<<endl;

float n1, n2;
char n;

cin>>n1>>n2;

cout<<"Escolha a opcao:"<<endl;
cout<<"1- Soma de 2 numeros."<<endl;
cout<<"2- Diferenca entre 2 numeros (maior pelo menor)."<<endl;
cout<<"3- Produto entre 2 numeros."<<endl;
cout<<"4- Divisao entre 2 numeros."<<endl;

cin>>n;

switch(n)
	{
	case '1':
		cout<<(n1+n2);
			break;
	case '2':
		if(n1>n2)
			{
			cout<<(n1-n2);
			}
		if(n2>n1)
			{
			cout<<(n2-n2);
			}
		if(n1==n2)
			{
			cout<<n1-n2;
			}
			break;
	case '3':
		cout<<(n1*n2);
			break;
	case '4':
		if(n2!=0)
			{
			cout<<(n1/n2);
			}
			else
				{
				cout<<"erro";
				}
			break;
	default:
		cout<<"Opcao invalida";		
	}//switch
		
return 0;
}//main

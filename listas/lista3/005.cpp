#include <iostream>
#include <cmath>

using namespace std;

int main()
{//main
float n1, n2;

cout<<"Digite dois numeros: "<<endl;
cin>>n1>>n2;

char operacao;

cout<<"Digite: "<<endl;
cout<<"A para ter o primeiro numero elevado ao segundo numero"<<endl;
cout<<"B para ter a raiz quadrada de cada um dos numeros"<<endl;
cout<<"C para ter a raiz cubica de cada um dos numeros"<<endl;
cin>>operacao;


switch(operacao)
	{//switch
	case 'A':
	case 'a':
		cout<<"Primeiro numero elevado ao segundo numero: "<<double(pow(n1, n2));
			break;
	case 'B':
	case 'b':
		cout<<"Raiz quadrada do primeiro numero: "<<sqrt(n1)<<endl;
		cout<<"Raiz quadrada do segundo numero: "<<sqrt(n2)<<endl;
			break;
	case 'C':
	case 'c':
		cout<<"Raiz quadrada do primeiro numero: "<<cbrt(n1)<<endl;
		cout<<"Raiz quadrada do segundo numero: "<<cbrt(n2)<<endl;
	default:
		cout<<"Opcao invalida";
	}//switch
}//main

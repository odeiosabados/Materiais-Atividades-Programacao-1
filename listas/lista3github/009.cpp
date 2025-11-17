#include <iostream>

using namespace std;

int main()
{
float valor;
cout<<"digite o valor do produto: "<<endl;
cin>>valor;

cout<<"escolha a forma de pagamento: "<<endl;
cout<<"1 para a vista em dinheiro"<<endl;
cout<<"2 para a vista no cartao de credito"<<endl;
cout<<"3 para parcelado em 2x"<<endl;
cout<<"4 para parcelado em 3x"<<endl;

char pagamento;
cin>>pagamento;

switch(pagamento)
	{
	case '1':
		valor=valor-(valor*0.10);
			break;
	case '2':
		valor=valor-(valor*0.05);
			break;
	case '3':
		valor=valor;
			break;
	case '4':
		valor=valor*1.1;
			break;
	default:
		cout<<"opcao invalida";
	}//switch
		
cout<<valor;

return 0;
	
}//main

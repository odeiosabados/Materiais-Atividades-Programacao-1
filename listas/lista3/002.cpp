#include <iostream>

using namespace std;

int main()
{
float salario, prestacao;
cin>>salario>>prestacao;
	
if(prestacao>(salario*0.20))
	{
	cout<<"emprestimo negado";
	}
else
	{
	cout<<"emprestimo aceito";
	}
		
	return 0;
}

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
int idade;
string categoria;

cin>>idade;

if(idade<5)
	{
	categoria="Nao ha";
	}
if(idade>=5 and idade<=7)
	{
	categoria="Infantil A";
	}
if(idade>=8 and idade<=10)
	{
	categoria="Infantil B";
	}
if(idade>=11 and idade<=13)
	{
	categoria="Juvenil A";
	}
if(idade>=14 and idade<=17)
	{
	categoria="Juvenil B";
	}
if(idade>=18)
	{
	categoria="Adulto";
	}

//arquivo
ofstream escrever("formulario.txt");
escrever<<"Categoria: "<<categoria<<endl;
escrever<<"Idade: "<<idade<<" anos";

return 0;
}

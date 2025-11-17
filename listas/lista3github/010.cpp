#include <iostream>
#include <fstream>

using namespace std;

int main()
{
float domingo, segunda_feira, terca_feira, quarta_feira, quinta_feira, sexta_feira, sabado;


//arquivo
ifstream ler("jazidas.txt");
ler>>domingo>>segunda_feira>>terca_feira>>quarta_feira>>quinta_feira>>sexta_feira>>sabado;
ler.close();

//operacoes

if(domingo>segunda_feira and domingo>terca_feira and domingo>quarta_feira and domingo>quinta_feira and domingo>sexta_feira and domingo>sabado)
	{
	cout<<"domingo"<<endl;
	cout<<domingo;
	}
	
if(segunda_feira>domingo and segunda_feira>terca_feira and segunda_feira>quarta_feira and segunda_feira>quinta_feira and segunda_feira>sexta_feira and segunda_feira>sabado)
	{
	cout<<"segunda-feira"<<endl;
	cout<<segunda_feira;
	}
	
if(terca_feira>segunda_feira and terca_feira>domingo and terca_feira>quarta_feira and terca_feira>quinta_feira and terca_feira>sexta_feira and terca_feira>sabado)
	{
	cout<<"terca-feira"<<endl;
	cout<<terca_feira;
	}

if(quarta_feira>segunda_feira and quarta_feira>terca_feira and quarta_feira>domingo and terca_feira>quinta_feira and terca_feira>sexta_feira and terca_feira>sabado)
	{
	cout<<"quarta-feira"<<endl;
	cout<<quarta_feira;
	}
	
if(quinta_feira>segunda_feira and quinta_feira>terca_feira and quinta_feira>quarta_feira and quinta_feira>domingo and quinta_feira>sexta_feira and quinta_feira>sabado)
	{
	cout<<"quinta-feira"<<endl;
	cout<<quinta_feira;
	}

if(sexta_feira>segunda_feira and sexta_feira>terca_feira and sexta_feira>quarta_feira and sexta_feira>quinta_feira and sexta_feira>domingo and sexta_feira>sabado)
	{
	cout<<"sexta-feira"<<endl;
	cout<<sexta_feira;
	}
	
if(sabado>segunda_feira and sabado>terca_feira and sabado>quarta_feira and sabado>quinta_feira and sabado>sexta_feira and sabado>domingo)
	{
	cout<<"sabado"<<endl;
	cout<<sabado;
	}	
	
return 0;
}

#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	float total, parcela, novototal, prestacao, novaprestacao;
	
	//leitura arquivo
	ifstream ler("venda.txt");
	ler>>total>>parcela;
	ler.close();
	
	//operacao
	total=(total*0.10)+total;
	prestacao=total/parcela;
	novaprestacao=prestacao-(prestacao*0.10);
	novototal=novaprestacao*parcela;
	
	//saida
	cout<<fixed<<setprecision(2)<<total<<endl;
	cout<<fixed<<setprecision(2)<<prestacao<<endl;
	cout<<fixed<<setprecision(2)<<novaprestacao<<endl;
	cout<<fixed<<setprecision(2)<<novototal<<endl;
	
	return 0;
}

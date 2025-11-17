#include <iostream>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
float hi, mi, ht, mt, mti, mtt, horadif, mindif, horadif2, mindif2;

cin>>hi>>mi>>ht>>mt;

//msmdia    mti=minutos totais iniciais//mtt=minutos totais termino

mti=(hi*60)+mi;
mtt=(ht*60)+mt; 
horadif=int((mtt-mti)/60);
mindif=int((((mtt-mti)/60)-horadif)*60);

//diadiferente

horadif2=int(((mtt-mti)/60)+24);
mindif2=(((((mtt-mti)/60)+24)-horadif2)*60);

if(ht>hi or (hi==ht and mt>mi))
	{
	cout<<horadif<<" "<<mindif;
	}
	
if(ht<hi or (hi==ht and mt<mi))
	{
	cout<<horadif2<<" "<<mindif2;
	}



return 0;
}

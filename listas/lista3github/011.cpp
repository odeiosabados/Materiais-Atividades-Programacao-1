#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
float p, a, l, ev, s, f, c, soma;

//arquivo

ifstream ler("listadecompras.txt");
ler>>p>>a>>l>>ev>>s>>f>>c;
ler.close();

//operacao

p=p*28.9;
a=a*19.9;
l=l*7.95;
ev=ev*2.99;
s=s*1.5;
f=f*1.85;
c=c*8.70;

soma=(p+a+l+ev+s+f+c);

if(soma<=200)
	{
	cout<<fixed<<setprecision(2)<<soma<<endl;
	cout<<fixed<<setprecision(2)<<soma*0.05<<endl;
	cout<<fixed<<setprecision(2)<<soma-(soma*0.05);
	}
	
if(soma>200)
	{
	cout<<fixed<<setprecision(2)<<soma<<endl;
	cout<<fixed<<setprecision(2)<<soma*0.10<<endl;
	cout<<fixed<<setprecision(2)<<soma-(soma*0.1);
	}

return 0;
}

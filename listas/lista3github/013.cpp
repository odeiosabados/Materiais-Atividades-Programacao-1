#include <iostream>

using namespace std;

int main()
{
int n1, n2, n3, menor, maior;

cin>>n1>>n2>>n3;

//menor
if((n1>=5 and n1<=100) and (n2>=5 and n2<=100) and (n3>=5 and n3<=100))
{
if(((n1+n2+n3)/3)==n1 and ((n1+n2+n3)/3)==n2 and ((n1+n2+n3)/3)==n3)
	{
	cout<<n1;
	}
	else{
	if (n1<n2 and n1<n3)
		{
		menor=n1;
		}
	if (n2<n1 and n2<n3)
		{
		menor=n2;
		}
	if (n3<n1 and n3<n2)
		{
		menor=n3;
		}

//maior
	if (n1>n2 and n1>n3)
		{
		maior=n1;
		}
	if (n2>n1 and n2>n3)
		{
		maior=n2;
		}
	if (n3>n1 and n3>n2)
		{
		maior=n3;
		}
	
//camila
	if(n1!=menor and n1!=maior)
		{
		cout<<n1;	
		}
	if(n2!=menor and n2!=maior)
		{
		cout<<n2;	
		}
	if(n3!=menor and n3!=maior)
		{
		cout<<n3;
		}
}
}
else
{
cout<<"erro";	
}
return 0;	
}

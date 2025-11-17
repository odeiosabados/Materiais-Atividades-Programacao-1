#include <iostream>

using namespace std;

int main()
{
int x, y;
cin>>x>>y;

if((x>=-500 and x<=500) and (y>=-500 and y<=500))
	{
	if((x>=0 and x<=423) and (y>=0 and y<=468))
		{	
		cout<<"dentro";	
		}
		else
			{
			cout<<"fora";
			}
	}
	else
		{
		cout<<"erro";
		}

return 0;
}

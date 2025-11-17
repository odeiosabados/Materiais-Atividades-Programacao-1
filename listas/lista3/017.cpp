#include <iostream>

using namespace std;

int main()
{
int a, b, c;
cin>>a>>b>>c;

if((a==0 or a==1) and (b==0 or b==1) and (c==0 or c==1)) //check
	{
	if((a==1 and b==0 and c==0) or (a==0 and b==1 and c==1))
		{
		cout<<"A";
		}
		else
		{
		if((b==1 and a==0 and c==0) or (b==0 and a==1 and c==1))
			{
			cout<<"B";
			}
			else
				{
				if((c==1 and a==0 and b==0) or (c==0 and b==1 and a==1))
					{
					cout<<"C";
					}
					else
						{
						cout<<"*";
						}
				}
		}
	}
	
return 0;	
}


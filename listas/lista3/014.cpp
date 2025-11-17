#include <iostream>

using namespace std;

int main()
{
int n1, n2, n3, imp, par;
s
cin>>n1>>n2>>n3;

imp=0;
par=0;
if((n1%2)==0)
    {
    par=par+1;
    }
    else
        {
        imp=imp+1;
        }

if((n2%2)==0)
    {
    par=par+1;
    }
    else
        {
        imp=imp+1;
        }

if((n3%2)==0)
    {
    par=par+1;
    }
    else
        {
        imp=imp+1;
        }

cout<<par<<endl<<imp;

return 0;
}

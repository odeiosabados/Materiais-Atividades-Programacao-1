#include <iostream>

using namespace std;

int main()
{//main
char sexo;
float altura;

cout<<"digite M para sexo masculino e F para feminino"<<endl;
cin>>sexo;
cout<<"digite sua altura"<<endl;
cin>>altura;

switch(sexo)
	{//switch
	case 'M':
	case 'm':
		cout<<"peso ideal: "<<(72.7*altura)-58;
			break;
	case 'F':
	case 'f':
		cout<<"peso ideal: "<<(62.1*altura)-44.7;
			break;
	}//switch
return 0;
}//main

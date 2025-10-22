// Resolucao da lista de atividades - Semana 1
// Aluno Jean Romeo Santos De Souza
// Matricula 202411140037

//questao 1
/*
#include <iostream>
using namespace std;
int main() { //faltava () aq
    cout << "Digite um número inteiro";
    int numero;
    cin >> numero;
    cout << numero * 2 << endl;
    return 0;
}
*/
//questao 2
/*
#include <iostream>
using namespace std;
int main () {
    int numero, dobro;
    float quinto;
    cin>>numero;
    dobro = numero * 2;
    quinto = numero / 5;
    cout<<dobro<<endl<<quinto;
}
*/
//questao 3
/*
#include <iostream>
using namespace std;
int main()  {
    float nota1, nota2, nota3;
	int peso1, peso2, peso3;
    cout<<"Digite 3 notas ";
    cin>>nota1>>nota2>>nota3;
    cout<<"Digite 3 pesos inteiros";
    cin>>peso1>>peso2>>peso3;

    float media = (nota1*peso1 + nota2*peso2 + nota3*peso3) / (peso1+peso2+peso3);
    cout<<media;
    return 0;
}
*/
//questao 4
/*
#include <iostream>
using namespace std;
int main () {
    float preco, novopreco;
    cout<<"Digite o preço do produto ";
    cin>>preco;
    novopreco = preco-(preco*0.12);
    cout<<"Seu novo preco: "<<novopreco;
    return 0;
}
*/
//questao 5
/*
#include <iostream>
using namespace std;

int main() {
    float pesoSacoKg;
    float racaoPorGatoGramas;
    float pesoSacoGramas;
    float racaoTotalConsumida;
    float racaoRestante;

    // Entrada de dados
    cout << "Digite o peso do saco de ração (em kg): ";
    cin >> pesoSacoKg;

    cout << "Digite a quantia de ração dada para cada gato em gramas: ";
    cin >> racaoPorGatoGramas;

    // Conversão de quilos para gramas
    pesoSacoGramas = pesoSacoKg * 1000;

    // Cálculo da ração consumida em 5 dias por dois gatos
    racaoTotalConsumida = (racaoPorGatoGramas * 2)*5;

    // Cálculo da ração restante
    racaoRestante = pesoSacoGramas-racaoTotalConsumida;

    // Saída
    cout << "Após 5 dias, restará " << racaoRestante << " g de ração." << endl;

    return 0;
}
*/
//questao 6
/*
#include <iostream>
using namespace std;
int main () {
    int a,b;
    cin>>a>>b;
    cout<<" Valor de a " <<a<<endl;
    cout<<" Valor de b " <<b<<endl;
    a+=b;
    b=a-b;
    a=a-b;
    cout<<" Valor de a " <<a<<endl;
    cout<<" Valor de b " <<b<<endl;
    return 0;
}
*/
//questao 7
/*
#include <iostream>
#include <cmath> // Biblioteca para usar sqrt()
using namespace std;
int main() {
    long cateto1, cateto2;
    float hipotenusa;

    // Entrada de dados
    cout << "Digite o valor do primeiro cateto: ";
    cin >> cateto1;

    cout << "Digite o valor do segundo cateto: ";
    cin >> cateto2;

    // Cálculo da hipotenusa
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    cout << "A medida da hipotenusa é: " << hipotenusa << endl;
    return 0;
}
*/
//questao 9
/*
#include <iostream>
using namespace std;
int main()
{
    int total,divisao;
    //entrada de dados
    cout<<"digite a quantidade de dinheiro: ";
    cin>>total;

    //operacao
    divisao=total/100;
    total=total%100;
    cout<<"notas de 100 = "<<divisao<<endl;
    divisao=total/50;
    total=total%50;
    cout<<"notas de 50 = "<<divisao<<endl;
    divisao=total/20;
    total=total%20;
    cout<<"notas de 20 = "<<divisao<<endl;
    divisao=total/10;
    total=total%10;
    cout<<"notas de 10 = "<<divisao<<endl;
    divisao=total/5;
    total=total%5;
    cout<<"notas de 5 = "<<divisao<<endl;
    divisao=total/2;
    total=total%2;
    cout<<"notas de 2 = "<<divisao<<endl;
    divisao=total/1;
    total=total%1;
    cout<<"notas de 1 = "<<divisao<<endl;

    return 0;
}
*/
//questao 10
/*
#include <iostream>
using namespace std;
int main()
{
    float pe, polegada, jarda, milha;

    cout<<"digite um valor em pes: ";
    cin>>pe;

    //operacoes
    polegada=pe*12;
    jarda=pe/3;
    milha=pe/5280;

    cout<<"valor em polegadas: "<<polegada<<endl;
    cout<<"valor em jardas: "<<jarda<<endl;
    cout<<"valor em milha: "<<milha<<endl;

    return 0;
}
*/
//questao 11
/*
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //entrada
    float x1,y1,x2,y2,ponto1,ponto2;
    cout<<"Digite o valor de x no primeiro ponto: "<<endl;
    cin>>x1;
    cout<<"Digite o valor de y no primeiro ponto: "<<endl;
    cin>>y1;
    cout<<"Digite o valor de x no segundo ponto: "<<endl;
    cin>>x2;
    cout<<"Digite o valor de y no segundo ponto: "<<endl;
    cin>>y2;

    //operacao
    ponto1=pow((x2-x1),2);
    ponto2=pow((y2-y1),2);

    cout<<sqrt(ponto1+ponto2)<<endl;

    return 0;
}
*/
//questao 12
/*
#include <iostream>
using namespace std;
int main()
{
    //entrada
    float fah, celsius;
    cout<<"insira uma temperatura em F: "<<endl;
    cin>>fah;

    //operacao
    celsius=(fah-32)*5/9;
    cout<<"equivale a "<<celsius<<" graus celsius.";

    return 0;
}
*/
//questao 13
/*
#include <iostream>
using namespace std;
int main()
{
    //entrada
    int dinheiro;
    int divisao;

    cout<<"Insira a quantidade de dinheiro em reis: "<<endl;
    cin>>dinheiro;

    //operacao
    divisao=dinheiro/10000;
    dinheiro=dinheiro%10000;
    cout<<"canhoes: "<<divisao<<endl;
    divisao=dinheiro/2000;
    dinheiro=dinheiro%2000;
    cout<<"kgs de polvora: "<<divisao<<endl;
    divisao=dinheiro/1500;
    dinheiro=dinheiro%1500;
    cout<<"espadas afiadas: "<<divisao<<endl;

    return 0;

}
*/
//questao 14
/*
#include <iostream>
using namespace std;
int main()
{
    //entrada
    float peso, maispeso, menospeso;
    cout<<"Digite seu peso: "<<endl;
    cin>>peso;

    //operacao
    maispeso=(peso*0.15)+peso;
    menospeso=peso-(peso*0.20);
    cout<<maispeso<<endl;
    cout<<menospeso<<endl;

    return 0;
}
*/
//questao 15
/*
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //entrada
    float a,b,c,delta,x1,x2,raizdelta;
    cout<<"digite o valor de a,b e c:"<<endl; //use o exemplo a=1, b=-3, c-54
    cin>>a>>b>>c;

    //operacao
    delta=pow(b,2)-(4*a*c);
    raizdelta=sqrt(delta);
    x1=((b*-1)+raizdelta)/(2*a);
    x2=((b*-1)-raizdelta)/(2*a);

    cout<<x1<<endl;
    cout<<x2<<endl;
    return 0;
}
*/
//questao 16
/*
#include <iostream>
using namespace std;
int main()
{
    //entrada
    int num;
    cout<<"digite um numero inteiro: "<<endl;
    cin>>num;

    //operacao
    cout<<num-1<<endl;
    cout<<num+1<<endl;
    return 0;
}
*/
//questao 17
/*
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //entrada
    float pi,raio;
    pi=3.14;
    cout<<"digite o valor do raio: "<<endl;
    cin>>raio;

    //operacao
    cout<<pi*pow(raio,2);

    return 0;
}
*/
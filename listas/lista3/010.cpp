#include <iostream>
#include <fstream>

using namespace std;

int main()
{
float dom, seg, ter, qua, qui, sex, sab, maior;

//arquivo
ifstream ler("jazidas.txt");
ler>>dom>>seg>>ter>>qua>>qui>>sex>>sab;
ler.close();

//operacao
maior=0;
if(dom>maior)
    {
    maior=dom;
    }

if(seg>maior)
    {
    maior=seg;
    }

if(ter>maior)
    {
    maior=ter;
    }

if(qua>maior)
    {
    maior=qua;
    }

if(qui>maior)
    {
    maior=qui;
    }

if(sex>maior)
    {
    maior=sex;
    }

if(sab>maior)
    {
    maior=sab;
    }

//saida
if(maior==dom)
    {
    cout<<"domingo"<<endl;
    cout<<dom<<endl;
    }

if(maior==seg)
    {
    cout<<"segunda_feira"<<endl;
    cout<<seg<<endl;
    }

if(maior==ter)
    {
    cout<<"terca_feira"<<endl;
    cout<<ter<<endl;
    }

if(maior==qua)
    {
    cout<<"quarta_feira"<<endl;
    cout<<qua<<endl;
    }

if(maior==qui)
    {
    cout<<"quinta_feira"<<endl;
    cout<<qui<<endl;
    }

if(maior==sex)
    {
    cout<<"sexta_feira"<<endl;
    cout<<qui<<endl;
    }

if(maior==sab)
    {
    cout<<"sabado"<<endl;
    cout<<sab<<endl;
    }

return 0;
}

#include <iostream>
#include "Invoice.h"
#include <string>

using namespace std;

Invoice::Invoice()
{
    num = 0;
    desc = "Vazio";
    quant = 0;
    preco = 0.0;
}
Invoice::Invoice(int n, string d, int q, double p)
{
    num = n;
    desc = d;
    quant = q;
    preco = p;

}

int Invoice::getNum()
{
    return num;
}

string Invoice::getDesc()
{
    return desc;
}

int Invoice::getQuant()
{
    return quant;
}

double Invoice::getPreco()
{
    return preco;
}

void Invoice::setNum(int n)
{
    num = n;
}

void Invoice::setDesc(string d)
{
    desc = d;
}

void Invoice::setQuant(int q)
{
    quant = q;
}

void Invoice::setPreco(double p)
{
    preco = p;
}

double getInvoiceAmount(int n, double p)
{
    return n*p;
}

void Verifica(int q, double p)
{
    if(q<0){
        cout << "Quantidade invalida" << endl;
        q = 0;
    }
    if(p<0){
        cout << "Preco invalido" << endl;
        p = 0.0;
    }
}

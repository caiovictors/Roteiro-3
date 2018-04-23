#include <iostream>
#include "Invoice.h"
#include <string>

using namespace std;

int main()
{
    Invoice fatura(2,"bola",3,10);

    cout << "Numero: " << fatura.getNum()
         << "\nDescricao: " << fatura.getDesc()
         << "\nQuantidade: " << fatura.getQuant()
         << "\nPreco: R$" << fatura.getPreco() << endl;

    return 0;
}

#ifndef DESPESAS_H_INCLUDED
#define DESPESAS_H_INCLUDED
#include <string>

using namespace std;

class Despesa{
    double valor;
    string tipoDeGasto;
public:
    Despesa();
    double getValor();
    void setValor(double);
    double gettipoDeGasto();
    void settipoDeGasto(string);
};
class ControleDeGastos{
public:
    Despesa *despesas;
    ControleDeGastos();
    void setDespesas(Despesa d);
    double CalculaTotalDeDespesas;
    bool existeDespesaDoTipo(string tipo);
    int qDespesas;
};


#endif // DESPESAS_H_INCLUDED

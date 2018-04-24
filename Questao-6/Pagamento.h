#ifndef PAGAMENTO_H_INCLUDED
#define PAGAMENTO_H_INCLUDED
#include <string>

using namespace std;

class Pagamento
{
private:
  double valorPagamento;
  string nomeDoFuncionario;

public:
  Pagamento();
  Pagamento(double vp, string nf);
  double getVp();
  string getNf();
  void setVp(double vp);
  void setNf(string nf);
};

#endif

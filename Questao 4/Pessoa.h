#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED
#include <string>

using namespace std;

class Pessoa
{
private:
    string nome;
    int idade;
    int telefone;
public:
    Pessoa(string n);
    Pessoa(string n,int  i,int t);
    string getNome();
    int getIdade();
    int getTelefone();
    void setNome(string n);
    void setIdade(int n);
    void setTelefone(int t);
};

#endif // PESSOA_H_INCLUDED

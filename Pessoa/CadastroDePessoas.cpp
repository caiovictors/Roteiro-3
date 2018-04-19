#include <iostream>
#include <string.h>
#include "Pessoa.h"

int main()
{
    Pessoa pessoa("Rodolfo", 14, 988384745);

    cout << "Nome: " << pessoa.getNome();

    return 0;
}

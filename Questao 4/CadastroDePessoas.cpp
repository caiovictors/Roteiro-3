#include <iostream>
#include <string.h>
#include "Pessoa.h"

int main()
{
    Pessoa pessoa("Felipe", 14, 988385089);

    cout << "Nome: " << pessoa.getNome()
	 << "\nIdade: " << pessoa.getIdade()
	 << "\nTelefone: " << pessoa.getTelefone() << endl;

    return 0;
}

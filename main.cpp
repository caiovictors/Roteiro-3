#include <iostream>
#include "Empregado.h"
#include <string>

using namespace std;

int main()
{
    Empregado emp1 = Empregado("Jorge", "Pereira", "50.000");
    Empregado emp2 = Empregado("Caio", "Mujo", "500.000");

    cout << "Salario Anual 1: " << emp1.getSalary()*12 << endl
    << "Salario Anual 2: " << emp2.getSalary()*12 << endl;

    emp1.setSalary(emp1.getSalary()*1.1);
    emp2.setSalary(emp2.getSalary()*1.1);

    cout << "Salarios com aumento de 10%: " << endl;

    cout << "Salario Anual 1: " << emp1.getSalary()*12 << endl
    << "Salario Anual 2: " << emp2.getSalary()*12 << endl;

    return 0;
}

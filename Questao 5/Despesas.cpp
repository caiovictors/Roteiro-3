#include <iostream>
#include "Despesas.h"
#include <string>

Despesa::Despesa(){

}

ControleDeGastos::ControleDeGastos(){
    despesas = new Despesa[100];
    qDespesas = 0;

}
void ControleDeGastos::setDespesas(Despesa d){
    despesas[qDespesas] = d;

}

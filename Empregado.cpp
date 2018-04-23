#include "Empregado.h"

Empregado::Empregado(string n, string s, float sal){
    nome = n;
    sobrenome = s;
    if(salario < 0){
        cout << "Salario invalido, salario = 0" << endl;
        salario = 0;
    }else{
        salario = s;
    }
}

string Empregado::getName(){
    return nome;
}

string Empregado::getLastn(){
    return sobrenome;
}

float Empregado::getSalary(){
    return salario;
}

void Empregado::setName(string n){
    nome = n;
}

void Empregado::setLastn(string s){
    return sobrenome = s;
}

void Empregado::setSalary(float sal){
    return salario = sal;
}

Empregado::~Empregado(){
    //Rs
}

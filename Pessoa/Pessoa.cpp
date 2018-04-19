#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa(string n){
        nome = n;
}
Pessoa::Pessoa(string n, int i, int t){
        nome = n
        idade = i;
        telefone = t;
}
int Pessoa::getNome(){
    return nome;
}
int Pessoa::getIdade(){
    return idade;
}
int Pessoa::getTelefone(){
    return telefone;
}
void Pessoa::setNome(string n){
    nome = n;
}
void Pessoa::setIdade(int i){
    idade = i;
}
void Pessoa::setTelefone(int t){
    telefone = t;
}

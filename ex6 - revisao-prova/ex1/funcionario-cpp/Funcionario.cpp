#include "../funcionario-hpp/Funcionario.hpp"

Funcionario::Funcionario(int id, string nome, double salarioBase) {
    this->id = id;
    this->nome = nome;
    this->salarioBase = salarioBase;
}

int Funcionario::getId() {
    return this->id;
}

void Funcionario::setId(int id) {
    this->id = id;
}

string Funcionario::getNome() {
    return this->nome;
}

void Funcionario::setNome(string nome) {
    this->nome;
}

double Funcionario::getSalarioBase() {
    return this->salarioBase;
}

void Funcionario::setSalarioBase(double salarioBase) {
    this->salarioBase = salarioBase;
}
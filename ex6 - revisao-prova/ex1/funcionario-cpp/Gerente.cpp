#include "../funcionario-hpp/Gerente.hpp"

Gerente::Gerente(int id, string nome, double salarioBase, double bonusAnual):Funcionario(id, nome, salarioBase) {
    this->bonusAnual = bonusAnual;
}

double Gerente::calcularSalarioTotal() {
    return this->getSalarioBase() + this->bonusAnual;
}
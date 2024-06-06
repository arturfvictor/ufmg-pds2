#include "../funcionario-hpp/FuncionarioRegular.hpp"

FuncionarioRegular::FuncionarioRegular(int id, string nome, double salarioBase):Funcionario(id, nome, salarioBase) {
    
}

double FuncionarioRegular::calcularSalarioTotal() {
    return this->getSalarioBase();
}
#include "../funcionario-hpp/Estagiario.hpp"

Estagiario::Estagiario(int id, string nome, double salarioBase): Funcionario(id, nome, salarioBase) {

}

double Estagiario::calcularSalarioTotal() {
    return this->getSalarioBase() * 0.8;
}
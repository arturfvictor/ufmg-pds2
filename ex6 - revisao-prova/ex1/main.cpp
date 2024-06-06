#include <vector>
#include <string>
#include <iostream>

#include "./funcionario-hpp/Funcionario.hpp"
#include "./funcionario-hpp/Estagiario.hpp"
#include "./funcionario-hpp/FuncionarioRegular.hpp"
#include "./funcionario-hpp/Gerente.hpp"

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::string;

int main() {
    Funcionario* estagiario = new Estagiario(1, "Jonas", 2000.0);
    Funcionario* funcionarioRegular = new FuncionarioRegular(1, "Robson", 2000.0);
    Funcionario* gerente = new Gerente(1, "Anderson", 2000.0, 50.0);

    vector<Funcionario*> funcionarios;
    funcionarios.push_back(estagiario);
    funcionarios.push_back(funcionarioRegular);
    funcionarios.push_back(gerente);

    for (auto funcionario : funcionarios) {
        cout << "Nome: " << funcionario->getNome() << " Salario: " << funcionario->calcularSalarioTotal() << endl;
    }
    return 0;
}
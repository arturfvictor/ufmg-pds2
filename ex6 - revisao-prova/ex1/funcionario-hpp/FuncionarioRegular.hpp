#ifndef FUNCIONARIOREGULAR
#define FUNCIONARIOREGULAR

#include "./Funcionario.hpp"

class FuncionarioRegular : public Funcionario {
    public:
        FuncionarioRegular(int id, string nome, double salarioBase);
        double calcularSalarioTotal() override;
};

#endif
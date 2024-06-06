#ifndef ESTAGIARIO
#define ESTAGIARIO

#include "./Funcionario.hpp"

class Estagiario : public Funcionario {
    public:
        Estagiario(int id, string nome, double salarioBase);
        double calcularSalarioTotal() override;
};

#endif
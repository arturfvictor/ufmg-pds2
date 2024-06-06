#ifndef FUNCIONARIO
#define FUNCIONARIO

#include <string>

using std::string;

class Funcionario {
    private:
        string nome;
        int id;
        double salarioBase;
    
    public:
        Funcionario(int id, string nome, double salarioBase);
        
        virtual double calcularSalarioTotal() = 0;

        void setNome(string nome);
        string getNome();

        void setId(int id);
        int getId();

        void setSalarioBase(double salarioBase);
        double getSalarioBase();
};

#endif
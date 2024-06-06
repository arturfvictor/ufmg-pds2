#include <vector>
#include <string>

#include "./veiculos-cpp/Caminhao.hpp"
#include "./veiculos-cpp/Van.hpp"

using std::vector;

int main() {
    vector<Veiculo*> veiculos;
    
    Veiculo* highline = new Caminhao("Scania", "Highline", 6, 6);
    Veiculo* cargo = new Caminhao("Chana", "Cargo", 6, 6);
    Veiculo* mack = new Caminhao("Rusteze", "Mack", 6, 6);

    Veiculo* ducato = new Van("Fiat", "Ducato", 2, 16);
    Veiculo* sprinter = new Van("Mercedez-Benz", "Sprinter", 2, 16);
    Veiculo* kombi = new Van("Volks", "Kombi", 2, 16);

    veiculos.push_back(highline);
    veiculos.push_back(cargo);
    veiculos.push_back(mack);
    veiculos.push_back(ducato);
    veiculos.push_back(sprinter);
    veiculos.push_back(kombi);

    for (auto veiculo : veiculos) {
        veiculo->exibirDados();
    }
}
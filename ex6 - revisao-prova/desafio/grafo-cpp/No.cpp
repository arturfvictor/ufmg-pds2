#include "../grafo-hpp/No.hpp"

#include <vector>
#include <string>

using std::vector;
using std::string;

No::No(int id): id(id) {
    
}

int No::getId() {
    return this->id;
}

vector<int> No::getVizinhos() {
    return this->vizinhos;
}

string No::emString() {
    string auxString = std::to_string(this->getId()) + " | ";

    for (int vizinho : vizinhos) {
        auxString += std::to_string(vizinho) + " ";
    }
    
    return auxString;
}

void No::adicionarVizinho(int idVizinho) {
    bool encontrado = false;
    for (int vizinho : this->vizinhos) {
        if (vizinho == idVizinho) {
            encontrado == true;
        }
    }

    if (!encontrado) {
        this->vizinhos.push_back(idVizinho);
    }
}

bool No::removerVizinho(int idVizinho) {
    int pos = 0;
    for (int vizinho : this->vizinhos) {
        if (vizinho == idVizinho) {
            this->vizinhos.erase(this->vizinhos.begin() + pos);
            return true;
        }
        pos++;
    }
    return false;
}

bool No::verificarVizinho(int idVizinho) {
    for (int vizinho : this->vizinhos) {
        if (vizinho == idVizinho) {
            return true;
        }
    }
    return false;
}
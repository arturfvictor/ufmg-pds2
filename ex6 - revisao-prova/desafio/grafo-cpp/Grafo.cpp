#include <iostream>

#include "../grafo-hpp/Grafo.hpp"

using std::cout;
using std::endl;

Grafo::Grafo() {
    
}

Grafo::Grafo(vector<No*> nos): nos(nos) {

}

No* Grafo::buscarNo(int id) {
    for (No* no : this->nos) {
        if (no->getId() == id) {
            return no;
        }
    }
    
    return nullptr;
}

void Grafo::adicionarNo(No* novoNo) {
    for (No* no : this->nos) {
        if (no->getId() == novoNo->getId()) {
            throw ("Id ja existente");
        }
    }
    this->nos.push_back(novoNo);
}

No* Grafo::removerNo(int id) {
    int posicao = 0;

    for (No* no : this->nos) {
        if (no->getId() == id) {
            No* aux = no;
            this->nos.erase(this->nos.begin() + posicao);
            return no;
        }
        posicao++;
    }

    return nullptr;
}

void Grafo::adicionarAresta(int id1, int id2) {
    for (No* no : this->nos) {
        if (no->getId() == id1) {
            no->adicionarVizinho(id2);
        } else if (no->getId() == id2) {
            no->adicionarVizinho(id1);
        }
    }
}

void Grafo::removerAresta(int id1, int id2) {
    for (No* no : this->nos) {
        if (no->getId() == id1) {
            no->removerVizinho(id2);
        } else if (no->getId() == id2) {
            no->removerVizinho(id1);
        }
    }
}

void Grafo::mostrarListaDeAdjacencia() {
    cout << "Lista de adjacencia" << endl;
    for (No* no : this->nos) {
        cout << no->emString() << endl;
    }
}

void Grafo::mostrarMatrizDeAdjacencia() {
    cout << "Matriz de adjacencia" << endl;

    int tamanho = this->nos.size();

    cout << "  ";
    for (No* no : this->nos) {
        cout << no->getId() << " ";
    }
    cout << "\n";

    for (No* no : this->nos) {
        cout << no->getId() << " ";
        for (int i = 1; i <= tamanho; i++) {
            if (no->verificarVizinho(i)) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << "\n";
    }
}
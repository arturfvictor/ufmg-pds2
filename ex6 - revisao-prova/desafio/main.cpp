#include <iostream>

#include "./grafo-hpp/No.hpp"
#include "./grafo-hpp/Grafo.hpp"

using std::cout;
using std::endl;

int main() {
    Grafo* grafo = new Grafo();
    
    No* no1 = new No(1);
    No* no2 = new No(2);
    No* no3 = new No(3);
    No* no4 = new No(4);
    No* no5 = new No(5);

    grafo->adicionarNo(no1);
    grafo->adicionarNo(no2);
    grafo->adicionarNo(no3);
    grafo->adicionarNo(no4);
    grafo->adicionarNo(no5);

    grafo->adicionarAresta(1, 2);
    grafo->adicionarAresta(1, 5);
    grafo->adicionarAresta(2, 3);
    grafo->adicionarAresta(2, 4);
    grafo->adicionarAresta(2, 5);
    grafo->adicionarAresta(3, 4);
    grafo->adicionarAresta(4, 5);

    grafo->mostrarListaDeAdjacencia();
    grafo->mostrarMatrizDeAdjacencia();

    return 0;
}
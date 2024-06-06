#include <vector>

#include "./No.hpp"

using std::vector;

class Grafo {
    private:
        vector<No*> nos;
    
    public:
        Grafo();
        Grafo(vector<No*> nos);

        No* buscarNo(int id);
        void adicionarNo(No* no);
        No* removerNo(int id);

        void adicionarAresta(int id1, int id2);
        void removerAresta(int id1, int id2);

        void mostrarListaDeAdjacencia();
        void mostrarMatrizDeAdjacencia();
};
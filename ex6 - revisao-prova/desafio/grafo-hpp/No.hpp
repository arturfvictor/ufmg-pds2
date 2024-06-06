#ifndef NO
#define NO

#include <vector>
#include <string>

using std::vector;
using std::string;

class No {
    private:
        int id;
        vector<int> vizinhos;
    public:
        No();
        No(int id);
        No(int id, vector<int> vizinhos);

        int getId();
        vector<int> getVizinhos();
        string emString();

        void adicionarVizinho(int idVizinho);
        bool removerVizinho(int idVizinho);
        bool verificarVizinho(int idVizinho);
};

#endif
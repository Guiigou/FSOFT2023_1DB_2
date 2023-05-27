#ifndef FSOFT_PROJETO_PLACAMAE_H
#define FSOFT_PROJETO_PLACAMAE_H
#include "Produto.h"

using namespace std;

class PlacaMae : public Produto {
private:
    std::string tipoMemoria;

public:
    PlacaMae(string nome, int ID, int quantidade, double precoVenda, double precoCompra, string tipoMemoria);
    string getTipoMemoria();
};

#endif //FSOFT_PROJETO_PLACAMAE_H

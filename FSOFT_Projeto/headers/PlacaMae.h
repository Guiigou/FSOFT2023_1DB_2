#ifndef FSOFT_PROJETO_PLACAMAE_H
#define FSOFT_PROJETO_PLACAMAE_H
#include "Produto.h"
#include <string>

using namespace std;

class PlacaMae : public Produto {
private:
    string tipoMemoria;

public:
    PlacaMae(string nome, int ID, int quantidade, double precoVenda, double precoCompra, string tipoMemoria);
    string getTipoMemoria();
};

#endif //FSOFT_PROJETO_PLACAMAE_H

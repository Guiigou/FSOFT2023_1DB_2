#ifndef FSOFT_PROJETO_PLACAGRAFICA_H
#define FSOFT_PROJETO_PLACAGRAFICA_H
#include "Produto.h"

using namespace std;

class PlacaGrafica : public Produto {
private:
    std::string tipoMemoria;

public:
    PlacaGrafica(std::string nome, int ID, int quantidade, double precoVenda, double precoCompra, std::string tipoMemoria);
    std::string getTipoMemoria();
};

#endif //FSOFT_PROJETO_PLACAGRAFICA_H

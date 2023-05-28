#ifndef FSOFT_PROJETO_PLACAGRAFICA_H
#define FSOFT_PROJETO_PLACAGRAFICA_H
#include "Produto.h"
#include <string>

using namespace std;

class PlacaGrafica : public Produto {
private:
    string tipoMemoria;

public:
    PlacaGrafica(std::string nome, int ID, int quantidade, double precoVenda, double precoCompra, string tipoMemoria);
    string getTipoMemoria();
};

#endif //FSOFT_PROJETO_PLACAGRAFICA_H

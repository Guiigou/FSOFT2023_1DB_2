#ifndef FSOFT_PROJETO_RATO_H
#define FSOFT_PROJETO_RATO_H
#include "Produto.h"
#include <string>

using namespace std;

class Rato : public Produto {
private:

    int DPI;
    bool bluetooth;

public:
    Rato(string nome, int ID, int quantidade, double precoVenda, double precoCompra, int DPI, bool bluetooth);
    int getDPI();
    bool getBluetooth();
};

#endif //FSOFT_PROJETO_RATO_H

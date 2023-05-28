#ifndef FSOFT_PROJETO_TECLADO_H
#define FSOFT_PROJETO_TECLADO_H
#include "Produto.h"
#include <string>

using namespace std;

class Teclado : public Produto {
private:
    string tipo ; //queriamos por switch, mas switch é uma keyword e portanto não dá

public:
    Teclado(string nome, int ID, int quantidade, double precoVenda, double precoCompra, string tipo);
    string getTipo();
};

#endif //FSOFT_PROJETO_TECLADO_H

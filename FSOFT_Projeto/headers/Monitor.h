#ifndef FSOFT_PROJETO_MONITOR_H
#define FSOFT_PROJETO_MONITOR_H
#include "Produto.h"

using namespace std;

class Monitor : public Produto {
private:
    int tamanho;
    int frequencia;

public:
    Monitor(string nome, int ID, int quantidade, double precoVenda, double precoCompra, int tamanho, int frequencia);
    int getTamanho();
    int getFrequencia();
};

#endif //FSOFT_PROJETO_MONITOR_H

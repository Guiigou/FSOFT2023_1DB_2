#ifndef FSOFT_PROJETO_PRODUTO_H
#define FSOFT_PROJETO_PRODUTO_H
#include <iostream>
#include <string.h>

using namespace std;

class Produto{
private:
    string nome;
    int ID;
    int quantidade;
    double precoVenda;
    double precoCompra;
public:
    Produto(string nome, int ID, int quantidade, double precoVenda, double precoCompra);

    string getNome();
    int getID();
    int getQuantidade();
    double getPrecoVenda();
    double getPrecoCompra();


};

#endif //FSOFT_PROJETO_PRODUTO_H

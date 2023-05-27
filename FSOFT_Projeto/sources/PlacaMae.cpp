#include "../headers/PlacaMae.h"
#include <iostream>

using namespace std;

PlacaMae::PlacaMae(string nome, int ID, int quantidade, double precoVenda, double precoCompra, string tipoMemoria)
        : Produto(nome, ID, quantidade, precoVenda, precoCompra) {
    this->tipoMemoria = tipoMemoria;
}

std::string PlacaMae::getTipoMemoria() {
    return tipoMemoria;
}
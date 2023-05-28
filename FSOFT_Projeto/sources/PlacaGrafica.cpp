#include <iostream>
#include "../headers/PlacaGrafica.h"
#include <locale.h>

using namespace std;

PlacaGrafica::PlacaGrafica(std::string nome, int ID, int quantidade, double precoVenda, double precoCompra, std::string tipoMemoria)
        : Produto(nome, ID, quantidade, precoVenda, precoCompra) {
    this->tipoMemoria = tipoMemoria;
}

string PlacaGrafica::getTipoMemoria() {
    return tipoMemoria;
}
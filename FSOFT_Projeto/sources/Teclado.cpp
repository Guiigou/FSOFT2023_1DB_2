#include "../headers/Teclado.h"
#include <iostream>

using namespace std;

Teclado::Teclado(string nome, int ID, int quantidade, double precoVenda, double precoCompra, string tipo)
        : Produto(nome, ID, quantidade, precoVenda, precoCompra) {
    this->tipo = tipo;
}

string Teclado::getTipo() {
    return tipo;
}
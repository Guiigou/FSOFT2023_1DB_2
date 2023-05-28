#include "../headers/Rato.h"
#include <iostream>
#include <locale.h>

using namespace std;

Rato::Rato(string nome, int ID, int quantidade, double precoVenda, double precoCompra, int DPI, bool bluetooth)
        : Produto(nome, ID, quantidade, precoVenda, precoCompra) {
    this->DPI = DPI;
    this->bluetooth = bluetooth;
}

int Rato::getDPI() {
    return DPI;
}

bool Rato::getBluetooth() {
    return bluetooth;
}
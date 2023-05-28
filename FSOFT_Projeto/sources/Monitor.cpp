#include "../headers/Monitor.h"
#include <iostream>
#include <locale.h>

using namespace std;

Monitor::Monitor(string nome, int ID, int quantidade, double precoVenda, double precoCompra, int tamanho, int frequencia)
        : Produto(nome, ID, quantidade, precoVenda, precoCompra) {
    this->tamanho = tamanho;
    this->frequencia = frequencia;
}

int Monitor::getTamanho() {
    return tamanho;
}

int Monitor::getFrequencia() {
    return tamanho;
}
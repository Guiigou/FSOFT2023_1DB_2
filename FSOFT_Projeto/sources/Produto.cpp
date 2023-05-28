#include "../headers/Produto.h"
#include <iostream>
#include <locale.h>

using namespace std;

Produto::Produto(string nome, int ID, int quantidade, double precoVenda, double precoCompra) {
    this->nome = nome;
    this->ID = ID;
    this->quantidade = quantidade;
    this->precoVenda = precoVenda;
    this->precoCompra = precoCompra;
}

string Produto::getNome() {
    return nome;
}

int Produto::getID() {
    return ID;
}

int Produto::getQuantidade() {
    return quantidade;
}

double Produto::getPrecoVenda() {
    return precoVenda;
}

double Produto::getPrecoCompra() {
    return precoCompra;
}


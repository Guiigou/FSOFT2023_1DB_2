#include <iostream>


#include "headers/Teclado.h"
#include "headers/Monitor.h"
#include "headers/Rato.h"
#include "headers/PlacaMae.h"
#include "headers/PlacaGrafica.h"

using namespace std;

int main() {
    //Criação de objetos com as suas respetivas subclasses
    Teclado teclado("Teclado Gamer", 1, 10, 59.99, 25.0, "Mecanico");
    Monitor monitor("Monitor LED", 2, 5, 199.99, 150.50, 24, 165);
    Rato rato("Rato Sem Fio", 3, 20, 29.99, 12.0, 20000, true);
    PlacaMae placaMae("ASUS", 4, 2, 199.99, 150.0, "DDR4");
    PlacaGrafica placaGrafica("RTX 3060", 5, 1, 399.99, 300.0, "GDDR6");

    // Acessando os atributos e métodos das subclasses

    cout << "\n\t\t\tCATALAGO\n" << endl;

    cout << "Teclado: " << teclado.getNome() << " | Tipo: " << teclado.getTipo() << " | Preco: " << teclado.getPrecoVenda() << endl;
    cout << "Monitor: " << monitor.getNome() << " | Tamanho: " << monitor.getTamanho() << " polegadas "  << " | Preco: " << monitor.getPrecoVenda() << endl;
    cout << "Rato: " << rato.getNome() << " | DPI: " << rato.getDPI() << " | Bluetooth: " << (rato.getBluetooth() ? "Sim" : "Não")  << " | Preco: " << rato.getPrecoVenda() << endl;
    cout << "Placa-Mae: " << placaMae.getNome() << " | Tipo de Memoria: " << placaMae.getTipoMemoria()  << " | Preco: " << placaMae.getPrecoVenda()<< endl;
    cout << "Placa Grafica: " << placaGrafica.getNome() << " | Tipo de Memoria: " << placaGrafica.getTipoMemoria() << " | Preco: " << placaGrafica.getPrecoVenda()<< endl;

    return 0;


}

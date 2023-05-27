#include <iostream>

#include "headers/Teclado.h"
#include "headers/Monitor.h"
#include "headers/Rato.h"
#include "headers/PlacaMae.h"
#include "headers/PlacaGrafica.h"

using namespace std;

int main() {
    Teclado teclado("Teclado Gamer", 1, 10, 59.99, 25.0, "Mecânico");
    Monitor monitor("Monitor LED", 2, 5, 199.99, 150.50, 24, 60);
    Rato rato("Rato Sem Fio", 3, 20, 29.99, 12.0, 20000, true);
    PlacaMae placaMae("Placa-Mãe", 4, 2, 199.99, 150.0, "DDR4");
    PlacaGrafica placaGrafica("Placa Gráfica", 5, 1, 399.99, 300.0, "GDDR6");

    // Acessando os atributos e métodos das subclasses
    cout << "Teclado: " << teclado.getNome() << " | Tipo: " << teclado.getTipo() << std::endl;
    cout << "Monitor: " << monitor.getNome() << " | Tamanho: " << monitor.getTamanho() << " polegadas" << std::endl;
    cout << "Rato: " << rato.getNome() << " | Modelo: " << rato.getDPI() << " | Bluetooth: " << (rato.getBluetooth() ? "Sim" : "Não") << std::endl;
    cout << "Placa-Mãe: " << placaMae.getNome() << " | Tipo de Memória: " << placaMae.getTipoMemoria() << std::endl;
    cout << "Placa Gráfica: " << placaGrafica.getNome() << " | Tipo de Memória: " << placaGrafica.getTipoMemoria() << std::endl;

    return 0;


}

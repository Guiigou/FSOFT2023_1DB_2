#include <iostream>
#include "../../headers/view/Menu.h"

using namespace std;

void Menu::showMainMenu() {
    cout << "==== Menu Principal ====" << endl;
    cout << "1. Armazem" << endl;
    cout << "2. Funcionarios" << endl;
    cout << "3. Contabilidade" << endl;
    cout << "4. Fornecedor" << endl;
    cout << "0. Sair" << endl;
    cout << "========================" << endl;
    cout << "Escolha uma opcao: ";
}
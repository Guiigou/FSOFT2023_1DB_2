
#include "../../headers/controller/SupplierController.h"
#include "../../headers/view/SupplierView.h"
#include <iostream>


void SupplierView::showSupplierMenu(SupplierController& supplierController) {

    int option;

    do {
        cout << "==== Menu do Supplier ====" << std::endl;
        cout << "1. Listar Informações do Fornecedor" << std::endl;
        cout << "0. Voltar" << std::endl;
        cout << "==========================" << std::endl;
        cout << "Escolha uma opção: ";
        cin >> option;
        cin.ignore();

        switch (option) {
            case 1: {
                supplierController.listSuppliersInfo();
                break;
            }

            case 0: {
                cout << "Voltando ao menu principal..." << std::endl;
                break;
            }
            default: {
                cout << "Opção inválida. Tente novamente." << std::endl;
                break;
            }
        }

        cout << std::endl;
    } while (option != 0);
}
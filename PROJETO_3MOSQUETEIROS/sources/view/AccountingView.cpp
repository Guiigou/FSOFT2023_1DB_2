#include <iostream>
#include "../../headers/view/AccountingView.h"
#include "../../headers/model/PurchaseRecord.h"
#include "../../headers/controller/AccountingController.h"

void AccountingView::showAccountingMenu(AccountingController& accountingController) {
    int option;

    do {
        cout << "==== Menu de Contabilidade ====" << endl;
        cout << "1. Registrar compra do fornecedor" << endl;
        cout << "2. Registrar retirada de produtos do armazém" << endl;
        cout << "3. Visualizar registro de compras" << endl;
        cout << "0. Voltar" << endl;
        cout << "===============================" << endl;
        cout << "Escolha uma opcao: ";
        cin >> option;
        cin.ignore();

        switch (option) {
            case 1: {
                std::string productID;
                int quantity;
                double purchasePrice;

                cout << "==== Registrar Compra do Fornecedor ====" << endl;
                cout << "Digite o ID do produto comprado: ";
                getline(std::cin, productID);
                cout << "Digite a quantidade comprada: ";
                cin >> quantity;
                cout << "Digite o preco de compra: ";
                cin >> purchasePrice;
                cin.ignore();

                PurchaseRecord purchaseRecord(productID, quantity, purchasePrice);
                accountingController.addPurchaseRecord(purchaseRecord);

                cout << "Compra registrada com sucesso!" << endl;
                break;
            }
            case 2: {
                std::string productID;
                int quantity;
                double purchasePrice;

                cout << "==== Registrar Retirada de Produtos do Armazem ====" << endl;
                cout << "Digite o ID do produto retirado: ";
                getline(std::cin, productID);
                cout << "Digite a quantidade retirada: ";
                cin >> quantity;
                cout << "Digite o preço de compra: ";
                cin >> purchasePrice;
                cin.ignore();

                PurchaseRecord purchaseRecord(productID, quantity, purchasePrice);
                accountingController.addPurchaseRecord(purchaseRecord);

                cout << "Retirada registrada com sucesso!" << endl;
                break;
            }
            case 3: {
                accountingController.listPurchaseRecords();
                break;
            }
            case 0: {
                cout << "Voltando ao menu principal..." << endl;
                break;
            }
            default: {
                cout << "Opção invalida. Tente novamente." << endl;
                break;
            }
        }

        cout << endl;
    } while (option != 0);
}
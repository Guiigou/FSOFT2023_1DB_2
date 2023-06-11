#include <iostream>
#include "../../headers/view/WarehouseView.h"
#include "../../headers/model/Product.h"
#include "../../headers/controller/WarehouseController.h"



void WarehouseView::showWarehouseMenu(WarehouseController& warehouseController) {

    int option;

    do {
        cout << "==== Menu do Armazém ====" << std::endl;
        cout << "1. Comprar produtos do fornecedor" << std::endl;
        cout << "2. Listar produtos disponíveis no armazém" << std::endl;
        cout << "3. Retirar produtos do armazém" << std::endl;
        cout << "0. Voltar" << std::endl;
        cout << "==========================" << std::endl;
        cout << "Escolha uma opção: ";
        cin >> option;
        cin.ignore();

        switch (option) {
            case 1: {
                string productName;
                string productID;
                string productDescription;
                int productQuantity;
                double productPurchasePrice;
                double productSellingPrice;

                cout << "==== Comprar Produtos do Fornecedor ====" << std::endl;
                cout << "Digite as informacoes do produto:" << std::endl;
                cout << "Nome: ";
                getline(std::cin, productName);
                cout << "ID: ";
                getline(std::cin, productID);
                cout << "Descricao: ";
                getline(std::cin, productDescription);
                cout << "Quantidade: ";
                cin >> productQuantity;
                cout << "Preco de compra: ";
                cin >> productPurchasePrice;
                cout << "Preco de venda: ";
                cin >> productSellingPrice;
                cin.ignore();

                Product newProduct(productName, productID, productDescription, productQuantity, productPurchasePrice, productSellingPrice);
                warehouseController.buyFromSupplier(newProduct, productQuantity);

                cout << "Produto comprado do fornecedor com sucesso!" << std::endl;
                break;
            }
            case 2: {
                warehouseController.listProducts();
                break;
            }
            case 3: {
                std::string productID;
                int quantity;

                cout << "==== Retirar Produtos do Armazem ====" << std::endl;
                cout << "Digite o ID do produto que deseja retirar: ";
                getline(std::cin, productID);
                cout << "Digite a quantidade a ser retirada: ";
                cin >> quantity;
                cin.ignore();

                warehouseController.removeProduct(productID, quantity);

                cout << "Produto retirado do armazém com sucesso!" << std::endl;
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
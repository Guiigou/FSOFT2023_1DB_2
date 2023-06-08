
#include "../../headers/controller/WarehouseController.h"
#include <iostream>

WarehouseController::WarehouseController() {

    // Exemplo de produtos já existentes no armazém
    products.push_back(Product("Teclado", "T001", "Teclado mecânico", 6, 50.0, 100.0));
    products.push_back(Product("Monitor", "M001", "Monitor 24 polegadas", 5, 200.0, 300.0));
    products.push_back(Product("Rato", "R001", "Rato sem fio", 10, 20.0, 40.0));
    products.push_back(Product("Placa gráfica", "PG001", "Placa grafica NVIDIA", 5, 500.0, 800.0));
    products.push_back(Product("Placa mãe", "PM001", "Placa mae ASUS", 5, 150.0, 250.0));
}


void WarehouseController::removeProduct(const std::string& productID, int quantity) {
    for (auto it = products.begin(); it != products.end(); ++it) {
        if (it->getID() == productID) {
            it->setQuantity(it->getQuantity() - quantity);
            if (it->getQuantity() <= 0) {
                products.erase(it);
            }
            break;
        }
    }
}

void WarehouseController::listProducts() const {
    if (products.empty()) {
        std::cout << "Nenhum produto disponível no armazém." << std::endl;
    } else {
        std::cout << "Produtos disponíveis no armazém:" << std::endl;
        for (const auto& product : products) {
            std::cout << "Nome: " << product.getName() << std::endl;
            std::cout << "ID: " << product.getID() << std::endl;
            std::cout << "Descrição: " << product.getDescription() << std::endl;
            std::cout << "Quantidade: " << product.getQuantity() << std::endl;
            std::cout << "Preço de compra: " << product.getPurchasePrice() << std::endl;
            std::cout << "Preço de venda: " << product.getSellingPrice() << std::endl;
            std::cout << "----------------------------------------" << std::endl;
        }
    }
}




void WarehouseController::buyFromSupplier(const Product& product, int quantity) {
    for (auto& p : products) {
        if (p.getID() == product.getID()) {
            p.setQuantity(p.getQuantity() + quantity);
            break;
        }
    }
}
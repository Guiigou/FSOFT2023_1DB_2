#include "../../headers/controller/SupplierController.h"
#include <iostream>

SupplierController::SupplierController() {
    // Inicialização de dados do fornecedor
    supplier = Supplier("Jorge Mendes", "910562175");

}

void SupplierController::setSupplier(const Supplier& supplier) {
    this->supplier = supplier;
}

void SupplierController::listSuppliersInfo() const {
    cout << "Informações do fornecedor:" << std::endl;
    cout << "Nome: " << supplier.getName() << std::endl;
    cout << "Contato: " << supplier.getContact() << std::endl;
}
#include <iostream>
#include "../../headers/controller/AccountingController.h"

void AccountingController::addPurchaseRecord(const PurchaseRecord& purchaseRecord) {
    purchaseRecords.push_back(purchaseRecord);
}

void AccountingController::listPurchaseRecords() const {
    if (purchaseRecords.empty()) {
        std::cout << "Nenhum registro de compra disponível." << std::endl;
    } else {
        std::cout << "Registros de compra:" << std::endl;
        for (const auto& record : purchaseRecords) {
            std::cout << "Produto: " << record.getProductID() << std::endl;
            std::cout << "Quantidade: " << record.getQuantity() << std::endl;
            std::cout << "Preço de compra: " << record.getPurchasePrice() << std::endl;
            std::cout << "----------------------------------------" << std::endl;
        }
    }
}
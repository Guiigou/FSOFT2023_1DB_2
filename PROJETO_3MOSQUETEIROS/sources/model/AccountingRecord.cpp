#include "../../headers/model/AccountingRecord.h"

AccountingRecord::AccountingRecord(const std::string& productID, int quantity)
        : productID(productID), quantity(quantity) {}

string AccountingRecord::getProductID() const {
    return productID;
}

int AccountingRecord::getQuantity() const {
    return quantity;
}
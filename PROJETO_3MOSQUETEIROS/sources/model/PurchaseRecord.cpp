#include "../../headers/model/PurchaseRecord.h"

PurchaseRecord::PurchaseRecord(const string& productID, int quantity, double purchasePrice)
        : productID(productID), quantity(quantity), purchasePrice(purchasePrice) {}

string PurchaseRecord::getProductID() const {
    return productID;
}

int PurchaseRecord::getQuantity() const {
    return quantity;
}

double PurchaseRecord::getPurchasePrice() const {
    return purchasePrice;
}
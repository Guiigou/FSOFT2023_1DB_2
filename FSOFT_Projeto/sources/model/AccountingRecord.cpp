#include "../../headers/model/AccountingRecord.h"

using namespace std;

AccountingRecord::AccountingRecord(const string& productID, int quantity)
        : productID(productID), quantity(quantity) {}

string AccountingRecord::getProductID() const {
    return productID;
}

int AccountingRecord::getQuantity() const {
    return quantity;
}
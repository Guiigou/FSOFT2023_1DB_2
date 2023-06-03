#include "../../headers/model/Transaction.h"

using namespace std;

Transaction::Transaction(const string& type, const string& product, int quantity, double value)
        : type(type), product(product), quantity(quantity), value(value) {}

string Transaction::getType() const {
    return type;
}

string Transaction::getProduct() const {
    return product;
}

int Transaction::getQuantity() const {
    return quantity;
}

double Transaction::getValue() const {
    return value;
}
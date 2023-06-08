#include "../../headers/model/Product.h"

Product::Product(string name, string ID, string description, int quantity, double purchasePrice, double sellingPrice) {
    this->name = name;
    this->ID = ID;
    this->description = description;
    this->quantity = quantity;
    this->purchasePrice = purchasePrice;
    this->sellingPrice = sellingPrice;
}

string Product::getName() const {
    return name;
}

string Product::getID() const {
    return ID;
}

string Product::getDescription() const {
    return description;
}

int Product::getQuantity() const {
    return quantity;
}

double Product::getPurchasePrice() const {
    return purchasePrice;
}

double Product::getSellingPrice() const {
    return sellingPrice;
}

void Product::setQuantity(int quantity) {
    this->quantity = quantity;
}
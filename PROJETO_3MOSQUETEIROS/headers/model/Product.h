
#ifndef PROJETO3MOSQUETEIROS_PRODUCT_H
#define PROJETO3MOSQUETEIROS_PRODUCT_H

#include <string>
using namespace std;

class Product {
private:
    string name;
    string ID;
    string description;
    int quantity;
    double purchasePrice;
    double sellingPrice;

public:
    // Construtor
    Product(string name, string ID, string description, int quantity, double purchasePrice, double sellingPrice);

    // Getters e Setters
    string getName() const;
    string getID() const;
    string getDescription() const;
    int getQuantity() const;
    double getPurchasePrice() const;
    double getSellingPrice() const;
    void setQuantity(int quantity);
};

#endif //PROJETO3MOSQUETEIROS_PRODUCT_H

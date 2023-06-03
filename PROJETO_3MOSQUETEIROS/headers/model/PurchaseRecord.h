
#ifndef PROJETO3MOSQUETEIROS_PURCHASERECORD_H
#define PROJETO3MOSQUETEIROS_PURCHASERECORD_H

#include <string>

using namespace std;

class PurchaseRecord {
private:
    string productID;
    int quantity;
    double purchasePrice;

public:
    PurchaseRecord(const string& productID, int quantity, double purchasePrice);

    string getProductID() const;
    int getQuantity() const;
    double getPurchasePrice() const;
};

#endif //PROJETO3MOSQUETEIROS_PURCHASERECORD_H

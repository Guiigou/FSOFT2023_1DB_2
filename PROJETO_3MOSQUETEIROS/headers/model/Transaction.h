
#ifndef PROJETO3MOSQUETEIROS_TRANSACTION_H
#define PROJETO3MOSQUETEIROS_TRANSACTION_H

#include <string>

using namespace std;

class Transaction {
private:
    string type;
    string product;
    int quantity;
    double value;

public:
    Transaction(const string& type, const string& product, int quantity, double value);

    string getType() const;
    string getProduct() const;
    int getQuantity() const;
    double getValue() const;
};

#endif //PROJETO3MOSQUETEIROS_TRANSACTION_H

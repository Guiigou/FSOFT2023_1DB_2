#ifndef PROJETO3MOSQUETEIROS_ACCOUNTINGRECORD_H
#define PROJETO3MOSQUETEIROS_ACCOUNTINGRECORD_H

#include <string>

using namespace std;

class AccountingRecord {
private:
    string productID;
    int quantity;

public:
    AccountingRecord(const string& productID, int quantity);

    string getProductID() const;
    int getQuantity() const;
};

#endif //PROJETO3MOSQUETEIROS_ACCOUNTINGRECORD_H


#ifndef PROJETO3MOSQUETEIROS_SUPPLIER_H
#define PROJETO3MOSQUETEIROS_SUPPLIER_H

#include <string>

using namespace std;


class Supplier {
private:
    string name;
    string contact;

public:
    Supplier();
    Supplier(const string& name, const string& contact);

    string getName() const;
    string getContact() const;
};


#endif //PROJETO3MOSQUETEIROS_SUPPLIER_H

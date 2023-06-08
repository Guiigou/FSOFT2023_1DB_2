//
// Created by guilh on 08/06/2023.
//

#ifndef PROJETO3MOSQUETEIROS_SUPPLIERCONTROLLER_H
#define PROJETO3MOSQUETEIROS_SUPPLIERCONTROLLER_H

#include <vector>
#include "../model/Supplier.h"

class SupplierController {
private:
    vector<Supplier> suppliers;
    Supplier supplier;

public:
    SupplierController();
    void setSupplier(const Supplier& supplier);
    void listSuppliersInfo() const;

};


#endif //PROJETO3MOSQUETEIROS_SUPPLIERCONTROLLER_H

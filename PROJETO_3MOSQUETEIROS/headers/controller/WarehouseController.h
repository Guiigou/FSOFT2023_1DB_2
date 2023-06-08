
#ifndef PROJETO3MOSQUETEIROS_WAREHOUSECONTROLLER_H
#define PROJETO3MOSQUETEIROS_WAREHOUSECONTROLLER_H



#include <vector>
#include <string>
#include "../model/Product.h"
#include "../model/Supplier.h"

class WarehouseController {
private:
    std::vector<Product> products;
    Supplier supplier;

public:
    WarehouseController();

    void buyFromSupplier(const Product& product, int quantity);
    void removeProduct(const string& productID, int quantity);
    void listProducts() const;

};


#endif //PROJETO3MOSQUETEIROS_WAREHOUSECONTROLLER_H

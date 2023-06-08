#include <iostream>
#include "../headers/view/Menu.h"
#include "../headers/controller/WarehouseController.h"
#include "../headers/model/Employee.h"
#include "../headers/controller/EmployeeController.h"
#include "../headers/controller/AccountingController.h"
#include "../headers/view/WarehouseView.h"
#include "../headers/view/EmployeeView.h"
#include "../headers/view/AccountingView.h"
#include "../headers/view/SupplierView.h"

int main() {
    WarehouseView warehouseView;
    EmployeeView employeeView;
    AccountingView accountingView;
    SupplierView supplierView;

    WarehouseController warehouseController;
    EmployeeController employeeController;
    AccountingController accountingController;
    SupplierController supplierController;


    int option;

    do {
        Menu::showMainMenu();
        cin >> option;
        cin.ignore();

        switch (option) {
            case 1: {
                WarehouseView::showWarehouseMenu(warehouseController);
                break;
            }
            case 2: {
                EmployeeView::showEmployeeMenu(employeeController);
                break;
            }
            case 3: {
                AccountingView::showAccountingMenu(accountingController);
                break;
            }
            case 4: {
                SupplierView::showSupplierMenu(supplierController);
            }
            case 0: {
                std::cout << "Encerrando o programa..." << std::endl;
                break;
            }
            default: {
                std::cout << "Opção inválida. Tente novamente." << std::endl;
                break;
            }
        }

        cout << std::endl;
    } while (option != 0);

    return 0;

}
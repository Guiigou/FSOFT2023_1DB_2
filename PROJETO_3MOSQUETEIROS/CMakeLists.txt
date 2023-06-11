cmake_minimum_required(VERSION 3.23)
project(PROJETO3mosqueteiros)

set(CMAKE_CXX_STANDARD 14)

add_executable(PROJETO3mosqueteiros headers/model/Product.h sources/model/Product.cpp headers/model/Supplier.h sources/model/Supplier.cpp headers/model/Employee.h sources/model/Employee.cpp headers/controller/WarehouseController.h sources/controller/WarehouseController.cpp headers/view/Menu.h headers/exception/InvalidOptionException.h sources/view/Menu.cpp sources/exception/InvalidOptionException.cpp sources/main.cpp headers/controller/EmployeeController.h sources/controller/EmployeeController.cpp headers/controller/AccountingController.h sources/controller/AccountingController.cpp sources/model/PurchaseRecord.cpp headers/model/PurchaseRecord.h sources/model/AccountingRecord.cpp headers/model/AccountingRecord.h sources/view/WarehouseView.cpp headers/view/WarehouseView.h sources/view/EmployeeView.cpp headers/view/EmployeeView.h sources/view/AccountingView.cpp headers/view/AccountingView.h sources/controller/SupplierController.cpp headers/controller/SupplierController.h sources/view/SupplierView.cpp headers/view/SupplierView.h headers/view/View.h)

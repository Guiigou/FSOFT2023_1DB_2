cmake_minimum_required(VERSION 3.23)
project(PROJETO3mosqueteiros)

set(CMAKE_CXX_STANDARD 14)

add_executable(PROJETO3mosqueteiros headers/model/Product.h sources/model/Product.cpp headers/model/Supplier.h sources/model/Supplier.cpp headers/model/Employee.h sources/model/Employee.cpp sources/main.cpp headers/model/Transaction.h sources/model/Transaction.cpp sources/model/PurchaseRecord.cpp headers/model/PurchaseRecord.h sources/model/AccountingRecord.cpp headers/model/AccountingRecord.h)

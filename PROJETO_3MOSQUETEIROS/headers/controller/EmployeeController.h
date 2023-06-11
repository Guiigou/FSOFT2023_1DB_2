
#ifndef PROJETO3MOSQUETEIROS_EMPLOYEECONTROLLER_H
#define PROJETO3MOSQUETEIROS_EMPLOYEECONTROLLER_H


#include <list>
#include "../model/Employee.h"

class EmployeeController {
private:
    list<Employee> employees;

public:
    EmployeeController();

    void addEmployee(const Employee& employee);
    void removeEmployee(const std::string& employeeID);
    void listEmployees() const;
};

#endif //PROJETO3MOSQUETEIROS_EMPLOYEECONTROLLER_H

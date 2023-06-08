
#ifndef PROJETO3MOSQUETEIROS_EMPLOYEECONTROLLER_H
#define PROJETO3MOSQUETEIROS_EMPLOYEECONTROLLER_H

#include <vector>
#include "../model/Employee.h"

class EmployeeController {
private:
    vector<Employee> employees;

public:
    EmployeeController();

    void addEmployee(const Employee& employee);
    void removeEmployee(const std::string& employeeID);
    void listEmployees() const;
};

#endif //PROJETO3MOSQUETEIROS_EMPLOYEECONTROLLER_H

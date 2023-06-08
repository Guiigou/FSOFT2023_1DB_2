
#ifndef PROJETO3MOSQUETEIROS_EMPLOYEE_H
#define PROJETO3MOSQUETEIROS_EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
private:
    string name;
    string ID;
    string email;
    string position;
    double salary;

public:
    // Construtor
    Employee(string name, string ID, string email, string position, double salary);

    // Getters
    string getName() const;
    string getID() const;
    string getEmail() const;
    string getPosition() const;
    double getSalary() const;
};

#endif //PROJETO3MOSQUETEIROS_EMPLOYEE_H

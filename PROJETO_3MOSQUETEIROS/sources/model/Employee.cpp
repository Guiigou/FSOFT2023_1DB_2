#include "../../headers/model/Employee.h"

using namespace std;

Employee::Employee(string name, string ID, string email, string position, double salary) {
    this->name = name;
    this->ID = ID;
    this->email = email;
    this->position = position;
    this->salary = salary;
}

string Employee::getName() const {
    return name;
}

string Employee::getID() const {
    return ID;
}

string Employee::getEmail() const {
    return email;
}

string Employee::getPosition() const {
    return position;
}

double Employee::getSalary() const {
    return salary;
}
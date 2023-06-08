#include "../../headers/controller/EmployeeController.h"
#include <iostream>

EmployeeController::EmployeeController() {
    // Inicialização de dados de exemplo
    employees.push_back(Employee("Joao Silva", "E001", "joao@example.com", "Gerente", 5000.0));
    employees.push_back(Employee("Maria Santos", "E002", "maria@example.com", "Vendedor", 3000.0));
    employees.push_back(Employee("Pedro Oliveira", "E003", "pedro@example.com", "Assistente", 2000.0));
}

void EmployeeController::addEmployee(const Employee& employee) {
    employees.push_back(employee);
}

void EmployeeController::removeEmployee(const std::string& employeeID) {
    for (auto it = employees.begin(); it != employees.end(); ++it) {
        if (it->getID() == employeeID) {
            employees.erase(it);
            break;
        }
    }
}

void EmployeeController::listEmployees() const {
    if (employees.empty()) {
        std::cout << "Nenhum funcionário registrado." << std::endl;
    } else {
        std::cout << "Funcionários registrados:" << std::endl;
        for (const auto& employee : employees) {
            cout << "Nome: " << employee.getName() << std::endl;
            cout << "ID: " << employee.getID() << std::endl;
            std::cout << "Email: " << employee.getEmail() << std::endl;
            std::cout << "Cargo: " << employee.getPosition() << std::endl;
            std::cout << "Salario: " << employee.getSalary() << std::endl;
            std::cout << "----------------------------------------" << std::endl;
        }
    }
}
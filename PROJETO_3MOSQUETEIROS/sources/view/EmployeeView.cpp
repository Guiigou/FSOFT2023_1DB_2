#include <iostream>
#include "../../headers/view/EmployeeView.h"
#include "../../headers/model/Employee.h"
#include "../../headers/controller/EmployeeController.h"


void EmployeeView::showEmployeeMenu(EmployeeController& employeeController) {
    int option;

    do {
        cout << "==== Menu de Funcionários ====" << endl;
        cout << "1. Contratar funcionário" << endl;
        cout << "2. Remover funcionários" << endl;
        cout << "3. Listar funcionário" << endl;
        cout << "0. Voltar" << std::endl;
        cout << "==============================" << endl;
        cout << "Escolha uma opção: ";
        cin >> option;
        cin.ignore();

        switch (option) {
            case 1: {
                string employeeName;
                string employeeID;
                string employeeEmail;
                string employeePosition;
                double employeeSalary;

                cout << "==== Contratar Funcionário ====" << endl;
                cout << "Digite as informações do funcionário:" << endl;
                cout << "Nome: ";
                getline(cin, employeeName);
                cout << "ID: ";
                getline(cin, employeeID);
                cout << "Email: ";
                getline(cin, employeeEmail);
                cout << "Cargo: ";
                getline(cin, employeePosition);
                cout << "Salário: ";
                cin >> employeeSalary;
                cin.ignore();

                Employee newEmployee(employeeName, employeeID, employeeEmail, employeePosition, employeeSalary);
                employeeController.addEmployee(newEmployee);

                cout << "Funcionário contratado com sucesso!" << endl;
                break;
            }
            case 2: {
                string employeeID;

                cout << "==== Remover Funcionário ====" << endl;
                cout << "Digite o ID do funcionário que deseja remover: ";
                getline(std::cin, employeeID);

                employeeController.removeEmployee(employeeID);

                cout << "Funcionário removido com sucesso!" << endl;
                break;
            }
            case 3: {
                employeeController.listEmployees();
                break;
            }
            case 0: {
                cout << "Voltando ao menu principal..." << endl;
                break;
            }
            default: {
                cout << "Opção inválida. Tente novamente." << endl;
                break;
            }
        }

        cout << endl;
    } while (option != 0);
}
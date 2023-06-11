#include <iostream>
#include "../../headers/view/EmployeeView.h"
#include "../../headers/model/Employee.h"
#include "../../headers/controller/EmployeeController.h"


void EmployeeView::showEmployeeMenu(EmployeeController& employeeController) {
    int option;

    do {
        cout << "==== Menu de Funcionarios ====" << endl;
        cout << "1. Contratar funcionario" << endl;
        cout << "2. Remover funcionarios" << endl;
        cout << "3. Listar funcionario" << endl;
        cout << "0. Voltar" << std::endl;
        cout << "==============================" << endl;
        cout << "Escolha uma opcao: ";
        cin >> option;
        cin.ignore();

        switch (option) {
            case 1: {
                string employeeName;
                string employeeID;
                string employeeEmail;
                string employeePosition;
                double employeeSalary;

                cout << "==== Contratar Funcionario ====" << endl;
                cout << "Digite as informações do funcionario:" << endl;
                cout << "Nome: ";
                getline(cin, employeeName);
                cout << "ID: ";
                getline(cin, employeeID);
                cout << "Email: ";
                getline(cin, employeeEmail);
                cout << "Cargo: ";
                getline(cin, employeePosition);
                cout << "Salario: ";
                cin >> employeeSalary;
                cin.ignore();

                Employee newEmployee(employeeName, employeeID, employeeEmail, employeePosition, employeeSalary);
                employeeController.addEmployee(newEmployee);

                cout << "Funcionario contratado com sucesso!" << endl;
                break;
            }
            case 2: {
                string employeeID;

                cout << "==== Remover Funcionario ====" << endl;
                cout << "Digite o ID do funcionario que deseja remover: ";
                getline(std::cin, employeeID);

                employeeController.removeEmployee(employeeID);

                cout << "Funcionario removido com sucesso!" << endl;
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
                cout << "Opcao invalida. Tente novamente." << endl;
                break;
            }
        }

        cout << endl;
    } while (option != 0);
}
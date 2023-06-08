
#ifndef PROJETO3MOSQUETEIROS_INVALIDOPTIONEXCEPTION_H
#define PROJETO3MOSQUETEIROS_INVALIDOPTIONEXCEPTION_H

#include <stdexcept>
#include <string>

using namespace std;

class InvalidOptionException : public std::exception {
private:
    std::string message;

public:
    // Construtor
    InvalidOptionException(string message);

    // Função para obter a mensagem de erro
    const char* what() const noexcept override;
};

#endif //PROJETO3MOSQUETEIROS_INVALIDOPTIONEXCEPTION_H

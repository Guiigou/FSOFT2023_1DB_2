
#ifndef PROJETO3MOSQUETEIROS_INVALIDOPTIONEXCEPTION_H
#define PROJETO3MOSQUETEIROS_INVALIDOPTIONEXCEPTION_H

#include <stdexcept>

#include <string>

using namespace std;

class InvalidOptionException : public std::exception {
private:
    string message;

public:
    // Construtor
    InvalidOptionException(const string& message);
    //override what function
    const char* what();
};

#endif //PROJETO3MOSQUETEIROS_INVALIDOPTIONEXCEPTION_H

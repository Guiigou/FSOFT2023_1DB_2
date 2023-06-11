#include "../../headers/exception/InvalidOptionException.h"

InvalidOptionException::InvalidOptionException(const string& message)
        : message(message) {}

const char* InvalidOptionException::what() {
    return message.c_str();
}
#include "../../headers/exception/InvalidOptionException.h"

InvalidOptionException::InvalidOptionException(std::string message) : message(message) {}

const char* InvalidOptionException::what() const noexcept {
    return message.c_str();
}
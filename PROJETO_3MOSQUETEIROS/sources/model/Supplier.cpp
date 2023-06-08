#include "../../headers/model/Supplier.h"

Supplier::Supplier() {}

Supplier::Supplier(const string& name, const string& contact)
        : name(name), contact(contact) {}

string Supplier::getName() const {
    return name;
}

string Supplier::getContact() const {
    return contact;
}
#pragma once
#include "Contact.h"

class Person :
    public Contact
{
protected:
    std::string name;
public:
    Person();
    Person(std::string address, std::string contactNumber, std::string name);

    std::string getName() const;
    void setName(std::string name);

    void showInfo() const;
    void editContact();
};


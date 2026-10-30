#include "Person.h"

Person::Person()
{
    address = "undefined";
}

Person::Person(std::string address, std::string contactNumber, std::string name)
    : Contact(address, contactNumber)
{
    this->name = name;
}

std::string Person::getName() const
{
    return name;
}

void Person::setName(std::string name)
{
    this->name = name;
}

void Person::showInfo() const
{
    std::cout << "\nName:\t\t" << name << "\n";
    Contact::showInfo();
}

void Person::editContact()
{
    Contact::editContact();
    std::string userInput;
    std::cout << "\nEnter new name:\t";
    std::cin >> userInput;
    setName(userInput);
}

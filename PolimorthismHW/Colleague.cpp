#include "Colleague.h"

Colleague::Colleague()
{
    companyName = "unknown";
}

Colleague::Colleague(std::string address, std::string contactNumber, std::string companyName, std::string fax, std::string contactPerson)
    : Contact(address, contactNumber)
{
    this->companyName = companyName;
    this->fax = fax;
    this->contactPerson = contactPerson;
}

std::string Colleague::getCompanyName() const
{
    return companyName;
}

void Colleague::setCompanyName(std::string companyName)
{
    this->companyName = companyName;
}

std::string Colleague::getFax() const
{
    return fax;
}

void Colleague::setFax(std::string fax)
{
    this->fax = fax;
}

std::string Colleague::getContactPerson() const
{
    return contactPerson;
}

void Colleague::setContactPerson(std::string contactPerson)
{
    this->contactPerson = contactPerson;
}

void Colleague::showInfo() const
{
    std::cout << "\nCompany:\t" << companyName;
    Contact::showInfo();
    std::cout << "Fax:\t\t" << fax <<
        "\nContact person:\t" << contactPerson;
}

void Colleague::editContact()
{
    Contact::editContact();
    std::string userInput;
    std::cout << "\nEnter new company name:\t";
    std::cin >> userInput;
    setCompanyName(userInput);
    std::cout << "\nEnter new fax:\t";
    std::cin >> userInput;
    setFax(userInput);
    std::cout << "\nEnter new contact person:\t";
    std::cin >> userInput;
    setContactPerson(userInput);
}

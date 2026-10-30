#pragma once
#include "Contact.h"
class Colleague :
    public Contact
{
protected:
    std::string companyName;
    std::string  fax;
    std::string contactPerson;
public:
    Colleague();
    Colleague(std::string address, std::string contactNumber, std::string companyName, std::string fax, std::string contactPerson);

    std::string getCompanyName() const;
    void setCompanyName(std::string companyName);
    std::string getFax() const;
    void setFax(std::string fax);
    std::string getContactPerson() const;
    void setContactPerson(std::string contactPerson);

    void showInfo() const;
    void editContact();
};


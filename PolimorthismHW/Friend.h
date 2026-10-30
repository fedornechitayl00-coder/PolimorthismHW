#pragma once
#include "Contact.h"
#include "Date.h"

class Friend :
    public Contact
{
protected:
    std::string name;
    Date birthday;
public:
    Friend();
    Friend(std::string address, std::string contactNumber, std::string name, Date birthday);

    std::string getName() const;
    void setName(std::string name);
    Date getBirthday() const;
    void setBirthday(Date birthday);

    void showInfo() const;
    void editContact();
};


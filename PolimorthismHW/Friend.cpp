#include "Friend.h"

Friend::Friend()
{
    name = "noname";
    birthday = Date(0, 0, 0);
}

Friend::Friend(std::string address, std::string contactNumber, std::string name, Date birthday)
    :Contact(address, contactNumber)
{
    this->name = name;
    this->birthday = birthday;
}

std::string Friend::getName() const
{
    return name;
}

void Friend::setName(std::string name)
{
    this->name = name;
}

Date Friend::getBirthday() const
{
    return birthday;
}

void Friend::setBirthday(Date birthday)
{
    this->birthday = birthday;
}

void Friend::showInfo() const
{
    std::cout << "\nName:\t\t" << name <<
        "\nBirthday:\t" << birthday << "\n";
    Contact::showInfo();
}

void Friend::editContact()
{
    Contact::editContact();
    std::string userInput;
    std::cout << "\nEnter new name:\t";
    std::cin >> userInput;
    setName(userInput);
    std::cout << "\nEnter new birthday date:\t";
    Date userNewDate;
    std::cin >> userNewDate;
    setBirthday(userNewDate);
}

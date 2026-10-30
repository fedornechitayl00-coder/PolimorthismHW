#include "Contact.h"

Contact::Contact()
{
	address = "undefined";
	contactNumber = "+380";
}

Contact::Contact(std::string address, std::string contactNumber)
{
	this->address = address;
	this->contactNumber = contactNumber;
}

std::string Contact::getAddress() const
{
	return address;
}

void Contact::setAddress(std::string address)
{
	this->address = address;
}

std::string Contact::getContactNumber() const
{
	return contactNumber;
}

void Contact::setContactNumber(std::string number)
{
	this->contactNumber = contactNumber;
}

void Contact::showInfo() const
{
	std::cout << "\nAddress:\t" << address <<
		"\nNumber:\t\t" << contactNumber << "\n";
}

void Contact::editContact()
{
	std::string userInput;
	std::cout << "\nEnter new number:\t";
	std::cin >> userInput;
	setContactNumber(userInput);
	std::cout << "\nEnter new address:\t";
	std::cin.ignore();
	std::getline(std::cin, userInput);
	setAddress(userInput);
}
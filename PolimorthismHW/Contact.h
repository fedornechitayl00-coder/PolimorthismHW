#pragma once
#include <string>
#include <iostream>

class Contact
{
protected:
	std::string address;
	std::string contactNumber;
public:
	Contact();
	Contact(std::string address, std::string contactNumber);

	std::string getAddress() const;
	void setAddress(std::string address);
	std::string getContactNumber() const;
	void setContactNumber(std::string number);

	void virtual showInfo() const;
	void virtual editContact();
};


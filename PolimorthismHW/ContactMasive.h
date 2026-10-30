#pragma once
#include <vector>
#include <algorithm>
#include "Colleague.h"
#include "Friend.h"
#include "Person.h"

class ContactMasive
{
	std::vector<Contact*> contacts;
public:
	void addContact(Contact* contact);
	void deleteContact(int index);
	void findContactBy(std::string userInput);
	void redactBy(int index);
};


#include "ContactMasive.h"

void ContactMasive::addContact(Contact* contact)
{
	contacts.push_back(contact);
}

void ContactMasive::deleteContact(int index)
{
	if (index < contacts.size()) {
		delete contacts[index];
		contacts.erase(contacts.begin() + index);
	}
}

void ContactMasive::findContactBy(std::string userInput)
{
	int count = 0;
	for (int i = 0; i < contacts.size(); ++i) {
		if (contacts[i]->getContactNumber() == userInput || contacts[i]->getAddress() == userInput) {
			std::cout << "\n___________________\n";
			contacts[i]->showInfo();
			count++;
		}
	}
	if (count != 0) {
		std::cout << "\nNo one found.\n";
	}
}

void ContactMasive::redactBy(int index)
{
	if (index < contacts.size()) {
		contacts[index]->editContact();
	}
}

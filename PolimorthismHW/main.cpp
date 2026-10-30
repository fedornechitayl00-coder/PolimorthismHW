#include "Colleague.h"
#include "ContactMasive.h"
#include "Friend.h"
#include "Person.h"

int main() {
	Colleague Nina("heroiv Kharkova 23-M", "+380737846574", "Minim", "virtual", "Nina");
	
	Friend Min("22 street", "+380980071028", "Minian", Date(12, 2, 2005));

	Person Ned("wkeeen 33-H", "+19873746283", "Neden");

	Nina.showInfo();
	Min.showInfo();
	Ned.showInfo();

	ContactMasive contacts;

	contacts.addContact(&Nina);
	contacts.addContact(&Min);
	contacts.addContact(&Ned);

	contacts.findContactBy("Neden");
	contacts.redactBy(1);
}
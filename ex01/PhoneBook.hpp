#include <iostream>
#include "Contact.hpp"

class PhoneBook {
	
	
private:


	Contact _contacts[8];
	int _i;


public:


	PhoneBook();

	void addContact();

	void searchContact();

	~PhoneBook();
	
};

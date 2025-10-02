# include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _i(0)
{

}

void PhoneBook::addContact()
{
	std::string info[5];

	std::cout << std::endl;

	std::cout << "First Name : ", std::cin >> info[0];
	std::cout << "Last Name : ", std::cin >> info[1];
	std::cout << "Nickname : ", std::cin >> info[2];
	std::cout << "Number : ", std::cin >> info[3];
	std::cout << "Darkest Secret : ", std::cin >> info[4];

	std::cout << std::endl;

	if (_i == 8)
		_i = 0;
	_contacts[_i].setInfo(info);
	_i++;
}

void PhoneBook::searchContact()
{
	int i = 0;

	std::cout << std::endl;
	std::cout << "       _____________________________________________" << std::endl;
	while (i < 8)
	{
		int j = 1;
		std::cout << "       |         "; std::cout << i + 1; std::cout << "|";
		while (j < 4)
		{
			_contacts[i].getInfo(j); std::cout << "|";
			j++;
		}
		std::cout << std::endl;
		i++;
		std::cout << "       _____________________________________________" << std::endl;

	}

	std::cout << std::endl;
	char c = 0;
	while (1)
	{
		std::cout << "Enter Index : ";
		std::cin >> c;
		std::cout << c << std::endl;
		if (c < '1' || c > '8')
			std::cout << "Does Not Exist !" << std::endl;
		else
			break ;
	}

	std::cout << std::endl;
	_contacts[(c - 48) - 1].print();
	std::cout << std::endl;
}

PhoneBook::~PhoneBook()
{
	
}
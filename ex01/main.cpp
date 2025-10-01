
#include <iostream>
#include "PhoneBook.hpp"

int	main ()
{
	PhoneBook phonebook;

	std::string cmd;

	std::cout << "PhoneBook.app [ADD] [SEARCH] [EXIT]" << std::endl;
	std::cout << std::endl;

	while (1)
	{
		std::cout << "> "; std::cin >> cmd;
		for (int i = 0; cmd[i]; i++)
			cmd[i] = std::tolower(cmd[i]);
		if (cmd == "add")
			phonebook.addContact();
		else if (cmd == "search")
			phonebook.searchContact();
		else if (cmd == "exit")
			return (0);
		else
			std::cout << "Wrong Command !" << std::endl;
	}
}
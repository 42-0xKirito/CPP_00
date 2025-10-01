#include <iostream>

class Contact {


private:


	std::string _f_name;
	std::string _l_name;
	std::string _n_name;
	std::string _number;
	std::string _secret;


public:


	Contact();

	void setInfo(std::string* info)
	{
		_f_name = info[0];
		_l_name = info[1];
		_n_name = info[2];
		_number = info[3];
		_secret = info[4];
	}

	void print()
	{
		std::cout << "First Name : "  << _f_name << std::endl;
		std::cout << "Last Name : " << _l_name << std::endl;
		std::cout << "Nickname : " << _n_name << std::endl;
		std::cout << "Number : " << _number << std::endl;
	}

	void getInfo(int i)
	{
		std::string str;

		if (i == 1)
			str = _f_name;
		if (i == 2)
			str = _l_name;
		if (i == 3)
			str = _n_name;
		if (str.length() > 10)
		{
			str[9] = '.';
			str[10] = '\0';
			str.resize(10);
		}
		else if (str.length() < 10)
		{
			for (int j = 0; j < (10 - (int)str.length()); j++)
				std::cout << " ";
		}
		std::cout << str;
	}
	
	~Contact();

};

Contact::Contact()
{

}

Contact::~Contact()
{

}
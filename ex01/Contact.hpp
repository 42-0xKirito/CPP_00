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

	void setInfo(std::string* info);

	void print();

	void getInfo(int i);
	
	~Contact();

};

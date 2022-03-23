#include "PhoneBook.hpp"
#include "Contact.hpp"
# include <iostream>
# include <string>
# include <iomanip>

PhoneBook::PhoneBook(void)
{
	int i;

	i = 0;
    std::cout << "PhoneBook open" << std::endl;
	while (i < 8)
	{
		Contact init;
		list[i] = init;
		i++;
	} 

    return ;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "PhoneBook close" << std::endl;
    return ;
}

Contact PhoneBook::get_contact(int i) const
{
	return (this->list[i]);
}

void PhoneBook::set_contact(int i, Contact contact)
{
	this->list[i] = contact;
}

void PhoneBook::search(int i, std::string fname, std::string lname, std::string nname) const 
{
	std::cout << std::setw(10) << i << "|";
	if (fname.size() > 10)	
		std::cout << fname.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << fname << "|";
	if (lname.size() > 10)	
		std::cout << lname.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << lname << "|";
	if (nname.size() > 10)	
		std::cout << nname.substr(0, 9) << ".|" << std::endl;
	else
		std::cout << std::setw(10) << nname << "|" << std::endl;
}

 
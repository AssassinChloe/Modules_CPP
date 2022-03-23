#ifndef PHONEBOOK_H
#define PHONEBOOK_H

# include <iostream>
# include <string>
# include <iomanip>

#include "Contact.hpp"

class PhoneBook 
{

	public:
		
		PhoneBook(void);
		~PhoneBook(void);
		void search(int i, std::string fname, std::string lname, std::string nname) const;
		void setcontact(Contact contact);
		Contact get_contact(int i) const;
		void set_contact(int i, Contact contact);
	
	private :
	
		Contact list[8];
};

#endif
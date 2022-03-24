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

		void	search(int index, Contact contact) const;
		void	print_contact(Contact contact) const;
		Contact	get_contact(int i) const;
		
		void	set_contact(int i, Contact contact);

	private :
	
		Contact list[8];
};

#endif
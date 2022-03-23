#include "main.hpp"

int main()
{
	int			i;
	int			j;
    PhoneBook	book;
	Contact		tmp;
    std::string	buff;
	int			index;

	i = 0;
	j = 0;
    while (1)
    {
        std::cin >> buff;
        if (buff == "EXIT")
            return (0);
        else if (buff == "SEARCH")
        {
			if (i > 0)
			{
				std::cout << "     INDEX|  LASTNAME  | FIRSTNAME|  NICKNAME|" << std::endl;
				while (j < i)
				{
					tmp = book.get_contact(j);
					book.affiche(j, tmp.get_fname(tmp), tmp.get_lname(tmp), tmp.get_nname(tmp));
					j++;
				}
				std::cout << "Please enter an index" << std::endl;
				std::cin >> index;
				if (index < 0 || index >= i)
				{
					std::cout << "Please enter a valid index : between 0 and " <<  (i - 1) << std::endl;
					std::cin >> index;

				}
			}
			else
			{
				std::cout << "Your Phonebook is empty, please add some contact first" << std::endl;
			}
        }
        else if (buff == "ADD")
        {
			if (i < 8)
			{
				std::cout << "Lastname : ";
            	std::cin >> buff;
				tmp.set_lname(buff);
            	std::cout << "Firstname : ";
            	std::cin >> buff;
				tmp.set_fname(buff);
            	std::cout << "Nickname : ";
            	std::cin >> buff;
				tmp.set_nname(buff);
            	std::cout << "Number : ";
            	std::cin >> buff;
				tmp.set_nb(buff);
            	std::cout << "Darkest Secret : ";
            	std::cin >> buff;
				tmp.set_sec(buff);
				book.set_contact(i, tmp);
				i++;
			}
				
			
        }
		else
        {
            std::cout << "Please use ADD, SEARCH or EXIT only" << std::endl;
        }
    }
}
